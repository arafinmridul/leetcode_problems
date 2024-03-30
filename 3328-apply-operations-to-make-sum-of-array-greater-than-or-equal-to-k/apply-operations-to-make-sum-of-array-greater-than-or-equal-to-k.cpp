class Solution {
public:
    int minOperations(int k)
{
    // [1] [4 4 4]
    // 15 (3-1) + 15/3 - 1
    if (k == 1)
        return 0;
    int ans = 1e6;
    for (int i = 1; i < k; ++i)
    {
        ans = min(ans, i - 1 + ((k + i - 1) / i) - 1);
        // cout << i << ' ' << ans << endl;
    }
    return ans;
}

};