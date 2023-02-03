n = int(input())
my_list = []

for _ in range(n):
        my_list.append(int(input()))
        
        
for num in my_list:
    if num % 2 == 0:
        print("EVEN")
    else:
        print("ODD")