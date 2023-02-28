class Node:
    def __init__(self, val=None):
        self.val = val
        self.next = None


def extract_common_nodes(l: Node, m: Node) -> Node:
    # Initialize a new circular linked list
    new_list = Node()
    new_list.next = new_list

    # Initialize pointers for the two input lists
    curr_l = l.next
    curr_m = m.next

    # Traverse the lists until one of them reaches the end
    while curr_l != l and curr_m != m:
        # If the values of the current nodes are the same, add it to the new list
        if curr_l.val == curr_m.val:
            # Check if the value is already in the new list to avoid duplicates
            if not is_in_list(new_list, curr_l.val):
                new_node = Node(curr_l.val)
                new_node.next = new_list.next
                new_list.next = new_node

            # Move both pointers forward
            curr_l = curr_l.next
            curr_m = curr_m.next
        # If the value of the current node in l is less than that in m, move l's pointer forward
        elif curr_l.val < curr_m.val:
            curr_l = curr_l.next
        # If the value of the current node in m is less than that in l, move m's pointer forward
        else:
            curr_m = curr_m.next

    return new_list.next


def is_in_list(node: Node, val) -> bool:
    curr = node.next
    while curr != node:
        if curr.val == val:
            return True
        curr = curr.next
    return False


# Initialize the first circular linked list
l = Node()
curr = l
for c in "efghijk":
    curr.next = Node(c)
    curr = curr.next
curr.next = l

# Initialize the second circular linked list
m = Node()
curr = m
for c in "bcdefi":
    curr.next = Node(c)
    curr = curr.next
curr.next = m

# Extract the common nodes and print the result
new_list = extract_common_nodes(l, m)
curr = new_list
while curr.next != new_list:
    print(curr.val)
    curr = curr.next
print(curr.val)
