class Node:
    def __init__(self, data):
        self.data=data
        self.next=None

class linked_list:
    def __init__(self):
        self.head=None

    def append(self,data):
        new=Node(data)
        temp=self.head
        if self.head is None:
            self.head=new
        else:
            while temp.next:
                temp=temp.next
            temp.next=new

    def reverse(self):
        prev = None
        cur = self.head

        while cur is not None:
            next = cur.next
            cur.next = prev
            prev = cur
            cur = next
        self.head =  prev

    def display(self):
        temp=self.head
        while temp:
            print(temp.data, '-->',end='')
            temp=temp.next


a = linked_list()
a.append(1)
a.append(2)
a.append(3)
a.append(4)
a.append(5)
a.display()
print('\n')
a.reverse()
a.display()
