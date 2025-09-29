s = input()
s = s[::-1]

sz = len(s)

j = 0
c = 1
op = ""

nums = [0, 0]

for i in s :
    if i>='0' and i<='9' :
        nums[j] += int(i)*c
        c *= 10
    else :
        op = i
        j += 1
        c = 1

if op == '+':
    print(nums[1]+nums[0])
elif op == '-':
    print(nums[1]-nums[0])
elif op == '/':
    print(int(nums[1]/nums[0]))
else :
    print(nums[1]*nums[0])