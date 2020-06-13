#include<stdio.h>
int main()
{
    int K,LOC=0,N,max,data[100];
    scanf("%d",&N);
    for(K=0;K<N;K++)
    {
        scanf("%d",&data[K]);
    }
    max=data[0];
    for(K=0;K<=N-1;K++)
    {

        if(max<data[K])
        {

            LOC=K;
            max=data[K];
        }
    }
    printf("location %d\n max %d",LOC+1,max);
    return 0;

}
