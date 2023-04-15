#include<stdio.h>
int main()
{
    int i, b,a[101],temp=0;
    for(i=0;i<=9;i++)
    {
      scanf("%d",&a[i]);
    }
    for(i=0;i<=9;i++)
    {
        //int temp=0;
      if(temp<a[i])
      {
          temp=a[i];
          b=i;
      }
    }
 printf("%d\n%d",temp,b+1 );
}

