n = int(input())
my_list = []

for _ in range(n):
    my_list.append(float(input()))

def temp_conver(t):
    if (t>7):
        print("UP")
    elif(t==7):
        print("EQUAL")
    elif(t<7):
        print("DOWN")

for num in my_list:
    temp_conver(num)
    #print('%2.2f' % (temp_conver(num)))
