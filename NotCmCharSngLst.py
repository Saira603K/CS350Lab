'''Write a function diffElem_LL(l, m) to exact all char values, 
which are NOT common ones, and link them together'''

class Node:
    def __init__(self, value):
        self.value = value
        self.next = None

def diffElem_LL(l, m):
    # Create two sets to keep track of elements in each linked list
    set_l = set()
    set_m = set()

    # Traverse linked list l and add elements to set_l
    current = l.next
    while current is not None:
        set_l.add(current.value)
        current = current.next

    # Traverse linked list m and add elements to set_m
    current = m.next
    while current is not None:
        set_m.add(current.value)
        current = current.next

    # Create a new linked list with difference elements
    new_list = Node("Head")
    current = new_list

    # Traverse linked list l and add elements to new_list if they are not in set_m
    current = l.next
    while current is not None:
        if current.value not in set_m:
            current_node = Node(current.value)
            current_node.next = new_list.next
            new_list.next = current_node
        current = current.next

    # Traverse linked list m and add elements to new_list if they are not in set_l
    current = m.next
    while current is not None:
        if current.value not in set_l:
            current_node = Node(current.value)
            current_node.next = new_list.next
            new_list.next = current_node
        current = current.next

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
