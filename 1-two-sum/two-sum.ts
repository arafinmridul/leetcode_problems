function twoSum(nums: number[], target: number): number[] {
    let n: number = nums.length;
    let track: number[] = [];
    let ans: number[];

    for (let i: number = 0; i < n; ++i) {
        let comp = target - nums[i]
        if (comp in track) {
            return [track[comp], i];
        }
        track[nums[i]] = i;
    }
    return [1, 2];
};