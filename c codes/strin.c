#include<stdio.h>
#include<string.h>
int main()
{
    char b[30],a[20],c[20];
    int d,e,f,i;

   printf("Enter First String= ");
   gets(a);
   printf("Enter Second String= ");
   gets(b);
   printf("\n***OUTPUT***\n");

   int len;
  i=strcmp(a,b);
     if(i==0)
     printf("Both Strings are Equal\n");
     else if(i>0)
     printf("%s is Greater than %s\n",a,b);
     else
       printf("%s is Greater than %s\n",b,a);
   d=strlen(a);
   e=strlen(b);
      printf("sum of String length=%d\n",d+e);

   strcat(a,b);
      printf("Strcat= %s\n",a);
   strcpy(a,b);
      printf("Strcpy= %s\n",a);
return 0;
}
