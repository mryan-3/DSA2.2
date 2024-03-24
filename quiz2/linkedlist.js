class ListNode {
  constructor(val, next = null) {
    this.val = val
    this.next = next
  }
}

/**
 * Question 1
 * Given head, the head of a linked list, determines if the linked list has a cycle in it.
 * There is a cycle in a linked list if there is some node in the list that can be reached again
 * by continuously following the next pointer.
 * Internally, pos is used to denote the index of the node that tail's next pointer is connected to.
 * Note that pos is not passed as a parameter.
 * Return true if there is a cycle in the linked list. Otherwise, return false.
 **/

function hasCycle(head) {
  if (!head || !head.next) return false

  let firstP = head
  let secondP = head.next

  while (firstP !== secondP) {
    if (!secondP || !secondP.next) return false
    firstP = firstP.next
     secondP = secondP.next.next
  }

  return true
}

/**
 * Question 2
 * Given the head of a linked list, return the node where the cycle begins. If there is no cycle, return null.
 * There is a cycle in a linked list if there is some node in the list that can be reached again by continuously
 * following the next pointer. Internally, pos is used to denote the index of the node that tail's
 * next pointer is connected to (0-indexed). It is -1 if there is no cycle.
 * Note that pos is not passed as a parameter.
**/

function detectCycle(head) {
  if (!head || !head.next) return null

  let firstP = head
  let secondP = head
  let isCyclePresent = false

  while (secondP.next && secondP.next.next) {
    firstP = firstP.next
    secondP = secondP.next.next
    if (firstP === secondP) {
      isCyclePresent = true
      break
    }
  }

  if (!isCyclePresent) return null

  firstP = head

  while (firstP !== secondP) {
    firstP = firstP.next
    secondP = secondP.next
  }

  return firstP
}

/**
 * Question 3
 * Write a function that takes a linked list and returns the reversed list.
**/

function reverseList(head) {
  let prev = null
  let curr = head

  while (curr !== null) {
    const next = curr.next
    curr.next = prev
    prev = curr
    curr = next
  }

  return prev
}
