class Solution
{
public:
    int cnt[26];
    string smallestPalindrome(string s, int k)
    {
        int n = s.size(), m = n / 2;
        for (int i = 0; i < m; i++)
        {
            cnt[s[i] - 'a']++;
        }
        auto Cm = [&](int n, int m) -> int
        {
            m = min(n - m, m);
            long long res = 1;
            for (int i = 1; i <= m; i++)
            {
                res = res * (n + 1 - i) / i;
                if (res >= k)
                    return k;
            }
            return res;
        };
        auto pre = [&](int x) -> int
        {
            long long res = 1;
            for (int i = 0; i < 26; i++)
            {
                if (cnt[i] == 0)
                    continue;
                res *= Cm(x, cnt[i]);
                if (res >= k)
                    return k;
                x -= cnt[i];
            }
            return res;
        };
        if (pre(m) < k)
            return "";
        string ans(m, 0);
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < 26; j++)
            {
                if (cnt[j] == 0)
                    continue;
                cnt[j] -= 1;
                long long p = pre(m - i - 1);
                if (p >= k)
                {
                    ans[i] = j + 'a';
                    break;
                }
                k -= p;
                cnt[j] += 1;
            }
        }
        int i = ans.size() - 1;
        if (1 & n)
            ans += s[n / 2];
        for (; i >= 0; i--)
            ans += ans[i];
        return ans;
    }
};
// debuge好久 发现是res*=(n+1-i)/i 的问题  优先级有问题导致出现小数！！！