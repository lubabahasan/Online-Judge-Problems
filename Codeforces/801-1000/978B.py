n = int(input())
arr = input()

x_amnt = 0

for i in range(n-2):
    if arr[i] == arr[i+1] == arr[i+2] == "x":
        i += 2
        x_amnt += 1

print(x_amnt)
 