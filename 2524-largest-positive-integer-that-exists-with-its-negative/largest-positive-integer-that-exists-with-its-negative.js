/**
 * @param {number[]} nums
 * @return {number}
 */
var findMaxK = function(nums) {
    let help = [];
    for(let i=0; i<=1000; ++i){
        help[i] = 0;
    }
    nums = nums.filter((val,idx,self)=>{
        return idx == self.indexOf(val);
    });
    for(let i=0; i<nums.length; ++i){
        if(nums[i] < 0)
            nums[i] *= -1;
        help[nums[i]]++;
    }
    for(let i=1000; i>0; --i){
        if(help[i] == 2)
            return i;
    }
    return -1;
};