class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
        int sum = 0;
        int tmp = x;
        while(tmp){
            sum += (tmp%10);
            tmp /= 10;            
        }
        if(x % sum == 0)
            return sum;
        else return -1;
    }
};