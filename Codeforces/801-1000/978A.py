n = input()
arr = list(input().split())
size = 0

c = 0

arr.reverse()
list = []

for n in arr:
    if n in arr and n not in list:
        list.append(n)
        c += 1
    if c == size:
        break

list.reverse()

for n in list:
    size += 1
print(size)
for n in list:
    print(f'{n} ', end="")