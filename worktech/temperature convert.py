n = int(input())
my_list = []

def temp_conver(t):

    p = (9*t)
    f =(p/5)+32
    return f

for _ in range(n):
        my_list.append(float(input()))

for num in my_list:
    #print(temp_conver(num))
    print('%2.2f'% (temp_conver(num)))
    