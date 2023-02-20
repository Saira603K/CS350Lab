class Node:
    def __init__(self, value):
        self.value = value
        self.next = None

def push_num(linked_list):
    current = linked_list.next
    num_list = []
    while current is not None:
        num_list.append(str(current.value))
        current = current.next
    return int("".join(num_list))

def LL_add(u, v):
    num_u = push_num(u)
    num_v = push_num(v)
    result = num_u + num_v

    # Create a new linked list to represent the sum
    result_list = Node("Head")
    current = result_list
    for data in str(result):
        current.next = Node(int(data))
        current = current.next

    current.next = None

    return result_list

# Create linked list u
u = Node("Head")
current = u
for num in [4,9,8,7,6, 3, 1, 4]:
    current.next = Node(num)
    current = current.next
current.next = None

# Create linked list v
v = Node("Head")
current = v
for num in [9,2,1,3, 5, 0, 9, 2]:
    current.next = Node(num)
    current = current.next
current.next = None

# Call the function and print the result
result = LL_add(u, v)
current = result.next
while current is not None:
    print(current.value, end="->")
    current = current.next
print("NULL")
