/**
 * @param {string} s
 * @return {string}
 */
var freqAlphabets = function(s) {
    let ans = "";
    let n = s.length;
    for(let i=0; i<n; ++i){
        let toAdd = '';
        if(i+2 < n && s[i+2]=='#'){
            toAdd = parseInt(s[i]+s[i+1])-1;
            i += 2;
        }
        else{
            toAdd = parseInt(s[i])-1;
        }
        ans += String.fromCharCode(97+toAdd);
    }
    return ans;
};