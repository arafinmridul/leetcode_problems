import java.math.*;
class Solution {
    public List<Integer> addToArrayForm(int[] num, int k) {
        StringBuilder numStr = new StringBuilder();
        for(int e:num)
            numStr.append(e);

        BigInteger numInt = new BigInteger(numStr.toString());

        BigInteger kInt = BigInteger.valueOf(k);

        BigInteger sum = numInt.add(kInt);

        List<Integer> ans = new ArrayList<>();

        for(char c: sum.toString().toCharArray())
            ans.add(c - '0');

        return ans;
    }
}