'''
Check whether there exists random pointer in doubly linked list or not and
correct it by a program
'''

class Node:
    def __init__(self, data):
        self.data = data
        self.next = None
        self.prev = None
        self.random = None

def check_and_correct_random_pointer(head):
    # Create a dictionary to map nodes in the original list to their indices
    node_index = {}
    current = head
    index = 0
    while current:
        node_index[current] = index
        current = current.next
        index += 1

    # Traverse the list again and correct the random pointers
    current = head
    while current:
        if current.random:
            # Check if the random pointer points to a node in the list
            if current.random in node_index:
                # Get the index of the random node and find the corresponding node in the new list
                random_index = node_index[current.random]
                new_current = head
                for i in range(random_index):
                    new_current = new_current.next
                current.random = new_current
            else:
                # If the random pointer points to a node outside the list, set it to None
                current.random = None
        current = current.next

def print_DLL(head):
    current = head
    while current:
        print(f'{current.data}(random={current.random.data if current.random else None})', end='<=>')
        current = current.next
    print('None')

list = Node('Head')
list.next = Node(1)
list.next.prev = list
list.next.next = Node(2)
list.next.next.prev = list.next
list.next.next.next = Node(3)
list.next.next.next.prev = list.next.next
list.next.next.next.next = Node(4)
list.next.next.next.next.prev = list.next.next.next
list.next.next.next.next.next = None
print('Original doubly linked list:')
print_DLL(list)
# Set random pointers
list.next.random = list.next.next.next
list.next.next.random = list.next
list.next.next.next.random = list.next.next.next.next
list.next.next.next.next.random = list.next.next

#print('Original doubly linked list:')
print("Random pointer double list: ")
print_DLL(list)

