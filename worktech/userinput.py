my_list = []
n = int(input())
for _ in range(n):
    my_list.append(int(input()))

for i in my_list:
    #print()
    j = str(i)
    for i in j:
        print(i,end=' ')
    print("")    
    