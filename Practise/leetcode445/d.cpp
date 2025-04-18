class Solution
{
    // 把十进制字符串 s 转成 b 进制
    // 用小学学过的【竖式除法】计算，读者可以先用竖式除法算算 1234÷10，再对照下面的代码
    vector<int> trans(string &s, int b)
    {
        for (char &c : s)
        {
            c -= '0';
        }
        vector<int> digits;
        while (!s.empty())
        {
            string nxt_s; // 用竖式除法计算 s / b 得到的商（十进制）
            int rem = 0;  // s % b
            for (char c : s)
            {
                rem = rem * 10 + c;
                int q = rem / b; // 商
                if (q || !nxt_s.empty())
                { // 忽略前导零
                    nxt_s.push_back(q);
                }
                rem = rem % b;
            }
            digits.push_back(rem);
            s = move(nxt_s);
        }
        ranges::reverse(digits);
        return digits;
    }

public:
    int countNumbers(string l, string r, int b)
    {
        vector<int> low = trans(l, b);
        vector<int> high = trans(r, b);
        int n = high.size();
        int diff_lh = n - low.size();

        vector memo(n, vector<int>(b, -1));
        auto dfs = [&](this auto &&dfs, int i, int pre, bool limit_low, bool limit_high) -> int
        {
            if (i == n)
            {
                return 1;
            }
            if (!limit_low && !limit_high && memo[i][pre] >= 0)
            {
                return memo[i][pre];
            }

            int lo = limit_low && i >= diff_lh ? low[i - diff_lh] : 0;
            int hi = limit_high ? high[i] : b - 1;

            long long res = 0;
            for (int d = max(lo, pre); d <= hi; d++)
            {
                res += dfs(i + 1, d, limit_low && d == lo, limit_high && d == hi);
            }
            res %= 1'000'000'007;

            if (!limit_low && !limit_high)
            {
                memo[i][pre] = res;
            }
            return res;
        };
        return dfs(0, 0, true, true);
    }
};