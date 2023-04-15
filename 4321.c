#include<stdio.h>
int sqr(int x)
{
    return x*x;
}
int main()
{
    int x;
    scanf("%d",&x);
    printf("%d\n",sqr(x));
    return 0;
}
