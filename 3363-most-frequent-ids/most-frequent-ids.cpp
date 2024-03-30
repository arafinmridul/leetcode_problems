class Solution {
public:
    vector<long long> mostFrequentIDs(vector<int> &nums, vector<int> &freq)
{
    int n = nums.size();
    unordered_map<int, long long> freqMap; // Change data type to long long
    priority_queue<pair<long long, int>> pq; // Change data type to long long
    vector<long long> ans;

    for (int i = 0; i < n; ++i)
    {
        if (freqMap.count(nums[i]) > 0)
        {
            pq.push({freqMap[nums[i]], nums[i]});
        }
        freqMap[nums[i]] += freq[i];
        pq.push({freqMap[nums[i]], nums[i]});

        while (!pq.empty() && pq.top().first != freqMap[pq.top().second])
        {
            pq.pop();
        }

        ans.push_back(pq.empty() ? 0 : pq.top().first);
    }

    return ans;
}
};