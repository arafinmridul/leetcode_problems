/**
 * @param {number[]} nums
 * @return {number[][]}
 */
var subsets = function(nums) {
        const result = [];
        solve(0, nums, [], result);
        return result;
};

var solve = (idx, nums, psf, result) => {
    result.push([...psf]);
        for (let i = idx; i < nums.length; i++) {  
            psf.push(nums[i]);  
            solve(i + 1, nums, psf, result);
            psf.pop();
        }
}