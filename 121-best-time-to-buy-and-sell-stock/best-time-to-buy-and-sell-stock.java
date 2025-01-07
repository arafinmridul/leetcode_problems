import java.util.*;

class Solution {

    public int maxProfit(int[] prices) {
        int n = prices.length;
        Map<Integer, Integer> help = new HashMap<>();
        
        for (int i = 0; i < n; ++i) {
            help.put(prices[i], help.getOrDefault(prices[i], 0) + 1);
        }
        
        int ans = 0;
        Integer[] helpKeys = help.keySet().toArray(new Integer[0]);
        Arrays.sort(helpKeys);
        
        int cur = helpKeys.length - 1;
        for (int i = 0; i < n; ++i) {
            help.put(prices[i], help.get(prices[i]) - 1);
            while (cur >= 0 && help.get(helpKeys[cur]) == 0) {
                cur--;
            }
            if (cur >= 0) {
                ans = Math.max(ans, helpKeys[cur] - prices[i]);
            }
        }
        
        return ans;
    }
}