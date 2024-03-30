class Solution {
public:
    int maximumLengthSubstring(string s)
{
    int n = s.size();
    int l = 0;
    int ans = 0;
    vector<int> v(26, 0);
    // bcbbbcba
    // aaaa
    // ccbcb
    for (int i = 0; i < n; ++i)
    {
        v[s[i] - 'a']++;
        while (v[s[i] - 'a'] > 2)
        {
            v[s[l] - 'a']--;
            ++l;
        }
        ans = max(ans, i - l + 1);
    }
    return ans;
}
};