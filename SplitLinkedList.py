'''
Find a program to split from first N nodes into new circular linked list with int type
nodes while preserving the old nodes. For instance, org = Head->2->3->4->5->6->7->8
->Head, two new circular linked lists should be Head->2->3->4->Head and
Head->5->6->7->8->Head from the outputs of function call split_CLL(org, 3)
'''

class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

def split_CLL(head, n):
    current = head
    count = 1
    while count < n and current.next != head:
        current = current.next
        count += 1
    if current.next == head:
        return head, None
    new_head = current.next
    current.next = head
    new_current = new_head
    while new_current.next != head:
        new_current = new_current.next
    new_current.next = new_head
    return head, new_head

def print_CLL(head):
    current = head
    while current:
        print(current.data, end='->')
        current = current.next
        if current == head:
            break
    print('Head')

org = Node('Head')
org.next = Node(2)
org.next.next = Node(3)
org.next.next.next = Node(4)
org.next.next.next.next = Node(5)
org.next.next.next.next.next = Node(6)
org.next.next.next.next.next.next = Node(7)
org.next.next.next.next.next.next.next = Node(8)
org.next.next.next.next.next.next.next.next = org

print('Original linked list:')
print_CLL(org)

new_head, remaining_head = split_CLL(org, 3)

print('New linked list with first 3 nodes:')
print_CLL(new_head)

print('Remaining linked list:')
print_CLL(remaining_head)
