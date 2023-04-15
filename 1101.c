#include<stdio.h>
int main()
{
    int a,b,sum=0,i,temp;
    while(1){
    scanf("%d%d",&a,&b);
    if(x <= 0) break;
    if(y <= 0) break;
    if (a>b)
    {
        temp=a;
        a=b;
        b=temp;
    }
    for(i=a;i<=b;i++)
    {
        printf("%d ",i);
        sum =sum+i;
    }
    printf("Sum=%d\n", sum);
    }
    return 0;
}
