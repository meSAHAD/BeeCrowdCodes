#include<stdio.h>
int main()
{
    int  i, a,b;
    double c,total =0 ;
    for(i=1;i<=2;i++)
    {
        scanf("%d%d%lf",&a,&b,&c);
        total= total + b*c;
    }
    printf("VALOR A PAGAR: R$ %.2lf\n", total);
    return 0;
}
