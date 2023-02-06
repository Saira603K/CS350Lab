#Singly Linked List
#Average of the linked list node values


class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

class linked_list:
    def __init__(self):
        self.head=None
# Function to insert a node at the beginning of the linked list
def push(node, data):
    if (node == None):
        return (Node(data))

    else:
        node.next = push(node.next, data)
        return node

# Function to iteratively find the avg of nodes of the given linked list
def Average_List(head):
    if (head == None):
        return -1

    count = 0  # Initialize count
    sum = 0
    avg = 0.0

    while (head != None):
        count += 1
        sum += head.data
        head = head.next 
    avg = sum / count # calculate average
    return avg



a = Node(1)
push(a, 2)
push(a, 3)
#push(a, 4)
#push(a, 1)
print("Average value is = ", Average_List(a))
