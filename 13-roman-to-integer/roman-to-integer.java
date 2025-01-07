class Solution {

    public int romanToInt(String s) {
        Map<Character, Integer> track = new HashMap<>();
        track.put('I', 1); track.put('V', 5);
        track.put('X', 10); track.put('L', 50);
        track.put('C', 100); track.put('D', 500);
        track.put('M', 1000);

        int n = s.length();
        int ans = 0;

        for (int i = 0; i < n; ++i) {
            if (i + 1 < n && s.charAt(i) == 'I' && (s.charAt(i + 1) == 'V' || s.charAt(i + 1) == 'X')) {
                ans += track.get(s.charAt(i + 1)) - track.get('I');
                ++i;
            } else if (i + 1 < n && s.charAt(i) == 'X' && (s.charAt(i + 1) == 'L' || s.charAt(i + 1) == 'C')) {
                ans += track.get(s.charAt(i + 1)) - track.get('X');
                ++i;
            } else if (i + 1 < n && s.charAt(i) == 'C' && (s.charAt(i + 1) == 'D' || s.charAt(i + 1) == 'M')) {
                ans += track.get(s.charAt(i + 1)) - track.get('C');
                ++i;
            } else {
                ans += track.get(s.charAt(i));
            }
        }

        return ans;
    }
}