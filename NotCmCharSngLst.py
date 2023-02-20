'''Write a function diffElem_LL(l, m) to exact all char values, 
which are NOT common ones, and link them together'''

class Node:
    def __init__(self, value):
        self.value = value
        self.next = None

def diffElem_LL(l, m):
    set_l = set()
    set_m = set()
    diff_set = set()

    # Convert linked list l to a set
    current = l.next
    while current is not None:
        set_l.add(current.value)
        current = current.next

    # Convert linked list m to a set
    current = m.next
    while current is not None:
        set_m.add(current.value)
        current = current.next

    # Find difference elements
    diff_set = set_l.symmetric_difference(set_m)

    # Create a new linked list with difference elements
    new_list = Node("Head")
    current = new_list

    for char in diff_set:
        current.next = Node(char)
        current = current.next

    current.next = None

    return new_list

# Create linked list l
l = Node("Head")
current = l
for char in "GOOD":
    current.next = Node(char)
    current = current.next
current.next = None

# Create linked list m
m = Node("Head")
current = m
for char in "GoOgLE":
    current.next = Node(char)
    current = current.next
current.next = None

# Call the function and print the result
result = diffElem_LL(l, m)
current = result.next
while current is not None:
    print(current.value, end="->")
    current = current.next
print("NULL")
