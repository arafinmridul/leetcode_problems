import java.util.*;

class Solution {
    List<String> ans = new ArrayList<>();

    HashMap<String, String> track = new HashMap<>();

    public void backtrack(int i, String curStr, String digits) {
        if (curStr.length() == digits.length()) {
            ans.add(curStr);
            return;
        }

        int n = track.get(Character.toString(digits.charAt(i))).length();

        for (int j = 0; j < n; j++) {
            char c = track.get(Character.toString(digits.charAt(i))).charAt(j);
            this.backtrack(i + 1, curStr + c, digits);
        }
    }

    public List<String> letterCombinations(String digits) {
        track.put("2", "abc");
        track.put("3", "def");
        track.put("4", "ghi");
        track.put("5", "jkl");
        track.put("6", "mno");
        track.put("7", "pqrs");
        track.put("8", "tuv");
        track.put("9", "wxyz");

        if (digits.isEmpty())
            return ans;

        backtrack(0, "", digits);

        return this.ans;
    }
}