/**
 * Definition for singly-linked list.
 * function ListNode(val, next) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.next = (next===undefined ? null : next)
 * }
 */
/**
 * @param {ListNode} head
 * @return {ListNode}
 */

var doubleIt = function(head) {
    let current = head; 
    let digits = []; 

  while (current) {
    digits.push(current.val);
    current = current.next;
  }

  let carry = 0; 
  let length = digits.length; 

  for (let i = length - 1; i >= 0; i--) {
    carry += 2 * digits[i]; 
    digits[i] = carry % 10;
    carry = Math.trunc(carry / 10); 
  }
  if (carry) digits.unshift(carry);

  let newHead = null; 
  let tail = null; 

  for (let value of digits) {
    current = new ListNode(value); 
    if (newHead) {
      tail.next = current; 
      tail = tail.next; 
    } else {
      tail = newHead = current;
    }
  }

  return newHead; 
};