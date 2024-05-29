/**
 * @param {string} s
 * @param {string} t
 * @param {number} maxCost
 * @return {number}
 */
var equalSubstring = function(s, t, maxCost) {
    let res = 0;
    let cur_cost = 0;
    let cur_start = 0;
    for (let last_ind = 0; last_ind < s.length; last_ind++) {
        cur_cost += Math.abs(s.charCodeAt(last_ind) - t.charCodeAt(last_ind));

        while (cur_cost > maxCost) {
            cur_cost -= Math.abs(s.charCodeAt(cur_start) - t.charCodeAt(cur_start));
            cur_start++;
        }

        if (last_ind - cur_start + 1 > res) {
            res = last_ind - cur_start + 1;
        }
    }
    return res;
};