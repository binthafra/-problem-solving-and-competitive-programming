#include <stdio.h>
int main ()
 {
   int a=10;
   printf("Hello\n");
   goto cse;

   a++;
   printf("C programming");
   cse:
   printf("value of a= %d",a);

   return 0;
}
