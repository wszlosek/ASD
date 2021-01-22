class Struktura:

    n = 0

    def __init__(self):
        self.arr = []
        self.hashd = {}
        n = 0


    def Push(self, x):

        if x in self.hashd:
            return

        self.arr.append(x)
        self.hashd[x] = self.n
        self.n += 1


    def Pop(self):
        self.Delete(self.arr[self.n-1])


    def Delete(self, x):

        index = self.hashd.get(x, None)
        if index == None: # pusta
            return

        del self.hashd[x]

        last = self.arr[self.n-1]
        self.arr[index], self.arr[self.n-1] = self.arr[self.n-1], self.arr[index] # swap

        del self.arr[-1]
        self.hashd[last] = index
        self.n -= 1


    def search(self, x):
        return self.hashd.get(x, None)


    def Print(self):
        self.arr = self.arr[::-1]
        print(self.arr)
        self.arr = self.arr[::-1]


q = Struktura()
q.Push(8)
q.Push(7)
q.Push(6)
q.Push(5)

q.Print()
q.Pop()
q.Print()
q.Pop()
q.Print()
q.Pop()
q.Print()
