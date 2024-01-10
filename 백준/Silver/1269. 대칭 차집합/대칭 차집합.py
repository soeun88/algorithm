An, Bn = map(int, input().split())

A = list((map(int, input().split())))
B = list((map(int, input().split())))

AuB = list(set(A) | set(B))
AnB = list(set(A) & set(B))

c = list(set(AuB) - set(AnB))

print(len(c))