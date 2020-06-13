#include<stdio.h>
int main()
{
    int N,i,sum;
    scanf("%d",&N);
    printf("PERFECTION OUTPUT\n");
    while(N!=0)
    {
        sum=0;

        for(i=1;i<=(N/2);i++)
        {
            if(N%i==0)
            sum=sum+i;
        }

        if(sum==N)
        {
            printf("%5d  PERFECT\n",N);
        }
            else if(sum<N)
            {
                printf("%5d  DEFICIENT\n",N);
            }
            else
            {
                printf("%5d  ABUNDANT\n",N);

            }
            scanf("%d",&N);
        }
        printf("END OF OUTPUT");
    }


