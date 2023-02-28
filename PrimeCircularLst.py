class Node:
    def __init__(self, val=None):
        self.val = val
        self.next = None


def delete_prime_CLL(head: Node) -> Node:
    # Handle empty or single node list
    if not head or head.next == head:
        return head

    # Initialize pointers
    prev = head
    curr = head.next

    # Traverse the list and delete prime nodes
    while curr != head:
        if is_prime(curr.val):
            prev.next = curr.next
            curr = curr.next
        else:
            prev = curr
            curr = curr.next

    # Check if the head node is prime
    if is_prime(head.val):
        # Find the last node in the list
        curr = head.next
        while curr.next != head:
            curr = curr.next
        curr.next = head.next
        head = head.next

    return head


def is_prime(n: int) -> bool:
    if n < 2:
        return False
    for i in range(2, int(n ** 0.5) + 1):
        if n % i == 0:
            return False
    return True

# Initialize the circular linked list
head = Node(44)
curr = head
for val in [4, 8, 9, 11, 14]:
    curr.next = Node(val)
    curr = curr.next
curr.next = head

# Delete prime nodes and print the result
head = delete_prime_CLL(head)
curr = head
while curr.next != head:
    print(curr.val)
    curr = curr.next
print(curr.val)
