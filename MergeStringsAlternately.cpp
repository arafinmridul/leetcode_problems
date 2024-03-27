#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string mergeAlternately(string word1, string word2)
    {
        int o = word1.size(), t = word2.size();
        int i = 0;
        string ans = "";
        for (; i < o and i < t; ++i)
        {
            ans += word1[i];
            ans += word2[i];
        }
        for (; i < o; ++i)
        {
            ans += word1[i];
        }
        for (; i < t; ++i)
        {
            ans += word2[i];
        }
        return ans;
    }
};