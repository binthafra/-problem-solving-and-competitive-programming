#include<iostream>
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
        result=(a,b);
        break;
        default:
        printf("invalid");
        break;

    }
    printf("%.2f %c %.2f = %.2f",a,op,b,result);
    return 0;
}


