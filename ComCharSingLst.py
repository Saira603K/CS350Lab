'''Given two singly linked lists with char type value node, like a-zA-Z
l= "Head->G->O->O->D->NULL", and m ="Head->G->o->O->g->L->E->NULL", 
Find the common char values and form a new linked list "Head->G->O->NULL" 
through a function/method called commElem(l, m).'''

class Node:
    def __init__(self, value):
        self.value = value
        self.next = None

def commElem(l, m):
    set_l = set()
    set_m = set()
    common_set = set()

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

    # Find common elements
    common_set = set_l.intersection(set_m)

    # Create a new linked list with common elements
    new_list = Node("Head")
    current = new_list

    for char in common_set:
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
result = commElem(l, m)
current = result.next
while current is not None:
    print(current.value, end="->")
    current = current.next
print("NULL")
