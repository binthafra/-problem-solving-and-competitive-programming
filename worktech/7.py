n = int(input())
my_list = []

for _ in range(n):
    my_list.append(float(input()))

for t in my_list:
    if (t>7):
        print("UP")
    elif(t==7):
        print("EQUAL")
    else:
        print("DOWN")
