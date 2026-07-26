class Solution:
    def copyRandomList(self, head: 'Optional[Node]') -> 'Optional[Node]':
        if not head:
            return None

        # Map original nodes to their copies
        old_to_new = {}

        # First pass: create a copy of each node
        curr = head
        while curr:
            old_to_new[curr] = Node(curr.val)
            curr = curr.next

        # Second pass: assign next and random pointers
        curr = head
        while curr:
            copy = old_to_new[curr]
            copy.next = old_to_new.get(curr.next)
            copy.random = old_to_new.get(curr.random)
            curr = curr.next

        return old_to_new[head]