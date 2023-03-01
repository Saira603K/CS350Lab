'''
Generate a function in clockwise rotation for each node (either char type or int type) in
doubly linked list by N places, e.g. given
    list = None<-Head<=>c<=>i<=>v<=>i>=>c->None, from function call
    rotate_DLL(list, 3), the output will be like this
    None<-Head<=>v<=>i<=>c<=>c>=>i->None
'''
class Node:
    def __init__(self, data):
        self.data = data
        self.next = None
        self.prev = None

def rotate_DLL(head, n):
    if not head:
        return None
    current = head
    count = 0
    while current and count < n:
        current = current.next
        count += 1
    if not current:
        return head
    new_head = current
    while current.next:
        current = current.next
    current.next = head
    head.prev = current
    new_head.prev.next = None
    new_head.prev = None
    return new_head


def print_DLL(head):
    current = head
    while current:
        print(current.data, end='<=>')
        current = current.next
    print('None')

list = Node('Head')
list.next = Node('c')
list.next.prev = list
list.next.next = Node('i')
list.next.next.prev = list.next
list.next.next.next = Node('v')
list.next.next.next.prev = list.next.next
list.next.next.next.next = Node('i')
list.next.next.next.next.prev = list.next.next.next
list.next.next.next.next.next = Node('c')
list.next.next.next.next.next.prev = list.next.next.next.next
list.next.next.next.next.next.next = None

print('Original doubly linked list:')
print_DLL(list)

new_head = rotate_DLL(list, 3)

print('Rotated doubly linked list by 3 places clockwise:')
print_DLL(new_head)

