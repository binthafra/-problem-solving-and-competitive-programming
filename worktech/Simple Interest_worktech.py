n = int(input())
#myList = []
myList = list(map(int, input().strip().split()))[:n]

max_num = max(myList)

if (max_num % 2 == 0):
    print("WON")
else:
    print("LOST")
