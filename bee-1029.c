#include<stdio.h>
int main()
{
    int a,b,i,j,n;
    scanf("%d",&n);
    for(j=1;j<=n;j++){
    scanf("%d%d",&a,&b);
    if(a>b)
    {
        for(i=b;i>=1;i--)
        {
            if(a%i==0&&b%i==0)goto print;

        }
    }
    else
    {
        for(i=a;i>=1;i--)
        {
            if(a%i==0&&b%i==0) goto print;
        }
    }
    print:
         printf("%d\n",i);
    }

    return 0;
}
