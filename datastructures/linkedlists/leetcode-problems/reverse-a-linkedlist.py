class Solution:
    def reverseList(self, head: Optional[ListNode]) -> Optional[ListNode]:

        itr = head
        prev = None

        while (itr != None):
            next = itr.next
            itr.next = prev
            prev = itr
            itr = next

        return prev
