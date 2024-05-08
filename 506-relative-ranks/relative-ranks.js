/**
 * @param {number[]} score
 * @return {string[]}
 */
var findRelativeRanks = function (score) {
    let help = [...score];
    help.sort((a, b) => b - a);

    let pos = [];
    let n = help.length;
    for (let i = 0; i < n; ++i) {
        pos[help[i]] = i + 1;
    }

    for (let i = 0; i < n; ++i) {
        let res = pos[score[i]];
        if (res == 1) {
            score[i] = "Gold Medal";
        } else if (res == 2) {
            score[i] = "Silver Medal";
        } else if (res == 3) {
            score[i] = "Bronze Medal";
        } else {
            score[i] = `${res}`;
        }
    }

    return score;
};