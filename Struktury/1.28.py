class Struktura:

    elements = []
    S = []
    n = 0

    def __init__(self, n):
        for i in range(n):
            self.elements.append(0)
            self.S.append(0)
            self.n = 0


    def Insert(self, i): # O(1)
        self.elements[i] = 1
        self.n += 1
        self.S[self.n] = i


    def Search(self, i): # O(1)
        return (self.elements[i] == 1)


    def Select(self): # O(1)
        if self.n != 0:
            self.n -= 1
            self.elements[self.S[self.n]] = 0

    def printAll(self):
        print(self.elements)
        print(self.S)


S = Struktura(10)

S.Insert(2)
S.Insert(3)
S.printAll()

S.Select()
S.printAll()

if S.Search(3):
    print("ZNALAZŁEM!")
else:
    print("NIE ZNALAZŁEM!")