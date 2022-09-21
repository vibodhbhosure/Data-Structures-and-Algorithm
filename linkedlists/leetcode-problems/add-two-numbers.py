# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def addTwoNumbers(self, l1: Optional[ListNode], l2: Optional[ListNode]) -> Optional[ListNode]:

        num1 = self.findNum(l1)
        num2 = self.findNum(l2)

        sum = num1 + num2
        head = ListNode(round(sum % 10))
        sum = sum//10
        itr = head
        while (sum != 0):
            node = ListNode(sum % 10)
            itr.next = node
            itr = itr.next
            sum = sum//10

        return head

    def findNum(self, l):
        num = 0
        mul = 1
        itr = l
        while (itr != None):
            num += itr.val*mul
            mul *= 10
            itr = itr.next

        return num
