N = int(input())

arr = []

i = 2

while(i <= N):
    if N % i == 0:
        arr.append(i)
        N //= i
    else:
        i += 1

for i in arr:
    print(i)