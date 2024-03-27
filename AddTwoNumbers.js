/**
 * Definition for singly-linked list.
 * function ListNode(val, next) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.next = (next===undefined ? null : next)
 * }
 */
/**
 * @param {ListNode} l1
 * @param {ListNode} l2
 * @return {ListNode}
 */
var addTwoNumbers = function (l1, l2) {
    class Node {
        constructor(value) {
            this.val = value;
            this.next = null;
        }
    }

    const ans = new Node(0);
    let curr = ans;
    let carry = 0;

    while (l1 || l2) {
        let sum = 0;
        if (l1) {
            sum += l1.val;
            l1 = l1.next;
        }

        if (l2) {
            sum += l2.val;
            l2 = l2.next;
        }
        sum += carry;

        carry = Math.floor(sum / 10);

        curr.next = new Node(sum % 10);

        curr = curr.next;
    }
    if (carry) {
        curr.next = new Node(carry);
    }
    return ans.next;
};
