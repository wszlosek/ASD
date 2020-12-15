'''
IDEA: Tablica pomocnicza ”pom” zawiera w sumie
indeksy zbioru S, gdzie znajdują się elementy.
Tablica pomocnicza ”pom” zawiera w sumie indeksy
zbioru S, gdzie znajdują się elementy. n - wielkość
'''

pom = []

def Search(i, S): # O(1): zwraca True jeśli znaleziono element, wpp. False
    return S[i] == 1

def Insert(i, S, n): # O(1)
    n += 1
    S[i] = 1
    pom.append(i)

    return n

def Select(S, n): # O(1), usuwa element, przy okazji zmniejsza wielkość n
    S[pom[n-1]] = 0
    n -= 1

    return n

S = [0 for i in range(10)] # oczywiscie nieskończona (abstrakcyjna) struktura
n = 0

n = Insert(1, S, n)
n = Insert(3, S, n)
n = Insert(4, S, n)
n = Insert(8, S, n)
print(pom)
print(S)

n = Select(S, n)
print(pom)
print(S)

n = Select(S, n)
print(pom)
print(S)

if Search(1, S):
    print('Znaleziono')
else:
    print('Nie ma')