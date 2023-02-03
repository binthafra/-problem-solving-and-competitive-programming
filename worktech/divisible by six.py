n = int(input())
my_list = []


def check(st) :
    n = len(st)
    # Return false if number
    # is not divisible by 2.
    if (((int)(st[n-1])%2) != 0) :
        return False
    # If we reach here, number
    # is divisible by 2. Now
    # check for 3.
    # Compute sum of digits
    digitSum = 0
    for i in range(0, n) :
        digitSum = digitSum + (int)(st[i])
    # Check if sum of digits
    # is divisible by 3
    return (digitSum % 3 == 0)

for _ in range(n):
        my_list.append(input())
        
        
for num in my_list:
    if check(num) == 0:
        print("False")
    else:
        print("True")