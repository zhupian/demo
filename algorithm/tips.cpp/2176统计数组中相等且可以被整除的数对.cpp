class Solution
{
public:
    int countPairs(vector<int> &nums, int k)
    {
        unordered_map<int, unordered_map<int, int>> freq;
        int ans = 0;
        for (int i = 0; i < nums.size(); ++i)
        {
            int num = nums[i];
            if (freq.count(num))
            {
                int required_gcd = k / gcd(i, k);
                for (auto &[g, cnt] : freq[num])
                {
                    if (g % required_gcd == 0)
                    {
                        ans += cnt;
                    }
                }
            }
            int current_gcd = gcd(i, k);
            freq[num][current_gcd]++;
        }
        return ans;
    }
};