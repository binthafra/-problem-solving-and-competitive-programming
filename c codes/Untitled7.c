#include<stdio.h>
float dis(int *p,int n)
{
    int i,sum=0;
    float avg;
    for(i=0;i<5;i++)
    sum=sum+p[i];
    avg=sum/5;
    return avg;
}
int main()
{
    int age[5]={20,22,24,27,31};
    float result;
    result=dis(&age,5);
    printf("average age = %.2f",result);
    return 0;
}
