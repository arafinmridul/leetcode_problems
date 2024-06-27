/**
 * @param {number} lowLimit
 * @param {number} highLimit
 * @return {number}
 */

var digSum = (num) => {
    let ans = 0;
    while(num > 0){
        ans += num%10;
        num = Math.floor(num/10);
    }
    return ans;
}

var countBalls = function(lowLimit, highLimit) {
    let ans = 0;
    let map = {};
    for(let i=lowLimit; i<=highLimit; ++i){
        let cur = digSum(i);
        map[cur] = (map[cur] || 0) + 1;
        ans = Math.max(ans, map[cur]);
    }
    return ans;
};