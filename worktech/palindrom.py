n = int(input())
my_list = []

for _ in range(n):
    my_list.append((input()))

for string in my_list:
    if(string==string[::-1]):
      print("True")
    else:
      print("False")



