#include<stdio.h>
float add(float a,float b)
{
    return a+b;
}
float sub(float a,float b)
{
    return a-b;
}
float mul(float a,float b)
{
    return a*b;
}
int main()
{
    char op;
    float a,b,result=0.0f;
    scanf("%f %c %f",&a,&op,&b);
    switch(op)
    {
        case'+':
        result=add(a,b);
        break;
        case'-':
        result=sub(a,b);
        break;
        case'*':
        result=mul(a,b);
        break;
        default:
        printf("invalid");
        break;

    }
    printf("%.2f %c %.2f = %.2f",a,op,b,result);
    return 0;
}

