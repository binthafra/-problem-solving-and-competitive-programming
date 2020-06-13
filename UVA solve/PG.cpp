#include <stdio.h>
int main()
{
    int n,t,i, flag = 0;
    scanf("%d", &n);
while(n!=0){
        for(i=2;i<=n/2;i++)

              if(n%i==0)
          {
                flag =1;
                break;
            }
        if (flag==0)
           printf("Good Choice\n", n);

        else
            printf("Bad Choice\n", n);
scanf("%d",&n);
}

    return 0;
}
