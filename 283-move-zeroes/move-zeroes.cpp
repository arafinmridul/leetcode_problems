class Solution {
public:
    void moveZeroes(vector<int> &nums)
{
    int n = nums.size();
    int cur = 0;
    for (int i = 0; i < n; ++i)
    {
        if (nums[i] == 0)
        {
            cur = max(i,cur);
            while (cur < n and !nums[cur])
                ++cur;
            if (cur == n)
                return;
            swap(nums[i], nums[cur]);
        }
    }
}
};