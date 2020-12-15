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
        x = self.arr[0]

        index = self.hashd.get(x, None)
        if index == None: # pusta
            return

        del self.hashd[x]

        last = self.arr[self.n-1]
        self.arr[index], self.arr[self.n-1] = self.arr[self.n-1], self.arr[index] # swap

        del self.arr[-1]
        self.hashd[last] = index
        self.n -= 1


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


q = Struktura()
q.Push(5)
q.Push(6)
q.Push(8)
q.Push(9)
q.Delete(5)
q.Pop()
print(q.arr)