#Singly Linked List
#Delete duplicate elements

class node:
  def __init__(self,data=None):
    self.data=data
    self.next=None

class linked_list:
    def __init__(self):
        self.head=node()

# Adds new node containing 'data' to the end of the linked list.
    def append(self,data):
        new_node=node(data)
        cur=self.head
        while cur.next!=None:
            cur=cur.next
        cur.next=new_node
# Prints out the linked list in traditional Python list format.
    def display(self):
        elems=[]
        cur_node=self.head
        while cur_node.next!=None:
            cur_node=cur_node.next
            elems.append(cur_node.data)
        print(elems)

# Delete  duplicate elements 
    def Delete_Dupl_Node(self):
        current = self.head
        while current:
            runner = current
            # Check until runner.next is not None.
            while runner.next:
                if current.data == runner.next.data:
                    runner.next = runner.next.next
                else:
                    runner = runner.next
            current = current.next



a = linked_list()
a.append(1)
a.append(2)
a.append(1)
a.append(3)
a.append(2)
a.append(1)
a.append(4)
a.display()
a.Delete_Dupl_Node()
print()
a.display()
