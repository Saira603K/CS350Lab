class Node:
    def __init__(self, value):
        self.value = value
        self.next = None

def srt_LL(ls):
    # Convert linked list to a list
    current = ls.next
    node_list = []
    while current is not None:
        node_list.append(current)
        current = current.next

    # Sort the list based on char value
    node_list.sort(key=lambda x: x.value)

    # Create a new linked list from the sorted list
    new_list = Node("Head")
    current = new_list

    for node in node_list:
        current.next = Node(node.value)
        current = current.next

    current.next = None

    return new_list

# Create linked list ls
ls = Node("Head")
current = ls
for char in "DACAG":
    current.next = Node(char)
    current = current.next
current.next = None

# Call the function and print the result
result = srt_LL(ls)
current = result.next
while current is not None:
    print(current.value, end="->")
    current = current.next
print("NULL")
