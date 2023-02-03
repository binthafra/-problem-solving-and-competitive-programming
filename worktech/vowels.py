n = int(input())
my_list = []

for _ in range(n):
    my_list.append((input()))


def check_vowels(a_string):
   count_o = 0
   for chr in a_string:
      if chr == 'o' or chr =='e' or chr =='i' or chr == 'u' or chr == 'a':
         count_o += 1
         return count_o
      else:
         pass
    
      

    
for stri in my_list:
    count_o = 0
    for chr in stri:
       if chr == 'o'or chr=='A'or chr=='E'or chr== 'O'or chr=='U'or chr =='e' or chr =='i' or chr == 'u' or chr == 'a' :
          count_o += 1   
       else:
          pass
    print(count_o)

