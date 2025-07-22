n = list(input().split())
tdorm = int(n[0])
tletter = int(n[1])

dorm_cap = list(input().split())

letter_rooms = list(input().split())

dorm = 0
prev_dorm = 0
room = 0

dorm_sum = int(dorm_cap[0])

dorms = []
rooms = []

for r in letter_rooms:
    flag = True
    while flag:
        if int(r) <= dorm_sum:
            dorms.append(dorm+1)
            temp = int(r) - prev_dorm
            rooms.append(temp)
            flag = False
        else:
            prev_dorm = dorm_sum
            dorm += 1
            dorm_sum += int(dorm_cap[dorm])

for i in range(tletter):
    print(f'{dorms[i]} {rooms[i]}')