#include<stdio.h>
int main()
{
    int i, a, b,sum=0, temp;
    scanf("%d%d",&a,&b);

    if (a<b)
    {
      temp=a;
      a=b;
      b=temp;}
    for(i=b;i<=a;i=i+2)
    {
        sum = sum+i;
    }
    printf("%d",sum);

    //else if (a=b) {printf("0\n");}
    return 0;

}
