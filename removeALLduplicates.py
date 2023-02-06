class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

class LinkedList:
    def __init__(self):
        self.head = None

    def append(self, data):
        new_node = Node(data)
        if self.head is None:
            self.head = new_node
            return
        curr = self.head
        while curr.next:
            curr = curr.next
        curr.next = new_node

    def Delete_node_value(self, value):
        curr = self.head
        prev = None
        while curr:
            if curr.data == value:
                if prev:
                    prev.next = curr.next
                else:
                    self.head = curr.next
            else:
                prev = curr
            curr = curr.next

    def print_list(self):
        curr = self.head
        while curr:
            print(curr.data, end = " ")
            curr = curr.next

a = LinkedList()
a.append(1)
a.append(2)
a.append(1)
a.append(3)
a.append(2)
print("Original list:")
a.print_list()
a.Delete_node_value(1)
a.Delete_node_value(2)
print("\nList after removing all duplicates:")
a.print_list()
