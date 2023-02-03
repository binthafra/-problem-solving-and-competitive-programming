wegithList = list(map(float, input().strip().split()))[:10]

sum_wg = sum(wegithList)
length = len(wegithList)

avg_weight = (sum_wg)/length

print('%2.6f'% (avg_weight))



