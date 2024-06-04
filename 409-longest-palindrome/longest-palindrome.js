/**
 * @param {string} s
 * @return {number}
 */
var longestPalindrome = function(s) {
    let str = s.split('').toSorted().join('');
    let single = s.length>1 ? false : true;
    let ans = 0, ct = 1;
    for(let i=1; i<s.length; ++i){
        if(str[i] == str[i-1]){
            ct++;
        }
        if(str[i] != str[i-1] || i==str.length-1){
            ans += ct&1 ? ct-1 : ct;
            if(ct&1) single = true;
            ct = 1;
        }
        if(str[i] != str[i-1] && i==str.length-1)
            single = true;
    }
    if(single) ans++;
    return ans;
};