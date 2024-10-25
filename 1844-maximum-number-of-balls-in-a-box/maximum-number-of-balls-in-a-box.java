class Solution {
    static int digSum(int x){
        int ans = 0;
        while(x > 0){
            ans += x%10;
            x /= 10;
        }
        return ans;
    }

    public int countBalls(int lowLimit, int highLimit) {
        int ans = 0;
        HashMap<Integer, Integer> map = new HashMap<>();

        for(int i=lowLimit; i<=highLimit; ++i){
            int cur = digSum(i);
            map.put(cur, map.getOrDefault(cur, 0) + 1);
            ans = Math.max(ans, map.getOrDefault(cur, 0));
        }

        return ans;
    }
}