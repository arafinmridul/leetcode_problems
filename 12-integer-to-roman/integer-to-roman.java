class Solution {
    public String intToRoman(int num) {
        Map<String, Integer> track = new LinkedHashMap<>();
        track.put("M", 1000); track.put("CM", 900);
        track.put("D", 500); track.put("CD", 400);
        track.put("C", 100); track.put("XC", 90);
        track.put("L", 50); track.put("XL", 40);
        track.put("X", 10); track.put("IX", 9);
        track.put("V", 5); track.put("IV", 4);
        track.put("I", 1);

        StringBuilder ans = new StringBuilder();

        for(Map.Entry<String, Integer> e : track.entrySet()){
            while (num >= e.getValue()) {
                num -= e.getValue();
                ans.append(e.getKey());
            }
        }

        return ans.toString();
    }
}