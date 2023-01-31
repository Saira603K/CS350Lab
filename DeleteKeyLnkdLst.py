# Delete the given key from Singly linkedlist
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
    
    def delete(self, key):
        temp=self.head
        if temp is not None:
            if temp.data is key:
                self.head=temp.next
                temp.next=None
                return True
            else:
                prev=None
                while temp.data is not key:
                    if temp.next is not None:
                        prev=temp
                        temp=temp.next
                    else:
                        return False
                prev.next=temp.next
                temp.next=None
                return True
        return False
    
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
print(a.delete(3))
a.display()
