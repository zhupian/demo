class Solution
{
public:
    string smallestPalindrome(string s)
    {
        int n = s.size();
        string t = s.substr(0, n / 2);
        ranges::sort(t);

        string ans = t;
        if (n % 2)
        {
            ans += s[n / 2];
        }
        ranges::reverse(t);
        return ans + t;
    }
};