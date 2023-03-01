'''In an open farmland where a hare (similar as rabbit) lives, it usually sleeps in any suitable
place, continually shifting from one place to another in total 10 nests labeled from 1 to 10.
But a wolf lives in the same area, hunting to check 10 nests in the manner as follows:
- start to check from label 1 nest
- then skip one nest (label 2) to check label 3
- increase skipped checking number to 2 (skip label 4 and label 5) and look for it in
label 6
- keep increasing skipped number to 3 to check label 10
- go back to count from label 1 by increasing skipped number to 4 and so on
Write a program to help this hare to make a decision which nests are safe to sleep,
maybe doesn't exist at all after the wolf checked n times
Hint: create a circular linked list and traverse one by one circularly.'''

class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

class CircularLinkedList:
    def __init__(self):
        self.head = None
        self.tail = None

    def insert(self, data):
        new_node = Node(data)
        if self.head is None:
            self.head = new_node
            self.tail = new_node
        else:
            new_node.next = self.head
            self.tail.next = new_node
            self.tail = new_node

    def is_safe(self, n):
        current = self.head
        skipped = 0
        while True:
            skipped += 1
            if current.next is None:
                return True
            current = current.next
            if skipped == n:
                skipped = 0
                if current == self.head:
                    return True
                else:
                    self.head = current.next
                    self.tail = current
            break;

clist = CircularLinkedList()
for i in range(1, 11):
    clist.insert(i)

n = 6  # the number of times the wolf checks nests
safe_nests = []
for i in range(1, 11):
    if clist.is_safe(n):
        safe_nests.append(i)
    clist.head = clist.head.next
print("Safe nests after", n, "checks:", safe_nests)
print("After checking the nests ", n, "times, hare decides there are no nest safe from the wolf")
