class Solution {
public:
    int maxBottlesDrunk(int numBottles, int numExchange) {
        int ans = numBottles;
        int empty = numBottles;
        
        while(empty - numExchange >= 0){
            ++ans;
            empty -= numExchange;
            empty++;
            ++numExchange;
        }
        
        return ans;
    }
};