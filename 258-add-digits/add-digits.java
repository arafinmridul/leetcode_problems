class Solution {
    public int addDigits(int num) {

        while(true){
            int cur = 0;
            while(num > 0){
                cur += num%10;
                num /= 10;
            }
            num = cur;
            if(num / 10 == 0) break;
        }

        return num;
    }
}