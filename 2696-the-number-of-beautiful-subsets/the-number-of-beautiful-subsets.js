/**
 * @param {number[]} nums
 * @param {number} k
 * @return {number}
 */
var beautifulSubsets = function(nums, k) {
    return counterSubsets(nums,k,0,new Set());
};

function counterSubsets(nums,k,index,subset){
    if(index===nums.length)
        return subset.size>0?1:0;

    let count=0;
    let current=nums[index];

    count+=counterSubsets(nums,k,index+1,new Set(subset));

    if(!subset.has(current-k)&&!subset.has(current+k)){
        subset.add(current);
        count+=counterSubsets(nums,k,index+1,new Set(subset));
    }    
    return count;
}