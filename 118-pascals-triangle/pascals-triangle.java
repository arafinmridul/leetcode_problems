class Solution {
    public List<List<Integer>> generate(int numRows) {
        List<List<Integer>> cur = new ArrayList<>();
        cur.add(Arrays.asList(1));

        for (int i = 1; i < numRows; ++i) {
            List<Integer> push = new ArrayList<>();
            List<Integer> end = cur.get(cur.size() - 1);
            
            int n = end.size();
            push.add(end.get(0));

            for (int j = 1; j < n; ++j) {
                push.add(end.get(j) + end.get(j - 1));
            }

            push.add(end.get(n - 1)); 
            cur.add(push);
        }
        return cur;
    }
}