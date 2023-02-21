class ListNode:
    def __init__(self, data):
        self.data = data
        self.next = None


def is_LoopLL(head):
    outer = head
    nodesTraversedByOuter = 0
    while outer != None:
        outer = outer.next
        nodesTraversedByOuter += 1
        k = nodesTraversedByOuter
        inner = head
            # iterating inner loop from head to number of nodes traversed by outer at this point.
        while k > 0:
            if outer == inner:
                return True
            inner = inner.next
            k -= 1
    return False


a = ListNode(2)
a.next = l1 = ListNode(9)
l1.next = l2 = ListNode(4)
l2.next = l3 = ListNode(6)
l3.next = l4 = ListNode(11)
l4.next = l2
    #   2->9->4->6->11->
    #      ^       	|
    #      |       	|
    # l4 goes back to l2
print(is_LoopLL(a))

b = ListNode(12)
b.next = l1 = ListNode(19)
l1.next = l2 = ListNode(24)
l2.next = l3 = ListNode(67)
l3.next = l4 = ListNode(11)
# l4 points goes to the next node
print(is_LoopLL(b))
