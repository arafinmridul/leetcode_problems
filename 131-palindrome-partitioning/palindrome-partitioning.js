/**
 * @param {string} s
 * @return {string[][]}
 */
var partition = function(s) {
    const ans = [];
    const candidate = [];
    const is_palindrome = (s, l, r) => {
        while (l < r) {
            if (s[l] !== s[r]) return false;
            l++; r--;
        }
        return true;
    }
    const solve = (s, i, previous) => {
        if (i === s.length) {
            if (is_palindrome(s, previous, i))
                ans.push([...candidate]);
        } else {
            if (is_palindrome(s, previous, i)) {
                candidate.push(s.substring(previous, i+1));
                solve(s, i + 1, i + 1);
                candidate.pop();
            }
            solve(s, i + 1, previous);
        }
    }
    solve(s, 0, 0);
    return ans;
};