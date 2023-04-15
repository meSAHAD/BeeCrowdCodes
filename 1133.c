#include<stdio.h>
int main()
{
    int X,Y,j,temp;
    scanf("%d%d",&X,&Y);
    if (X>Y)
        {
            temp=X;
            X=Y;
            Y=temp;
        }
    for(j=X+1;j<Y;j++)
        {
            if (j%5==2||j%5==3){printf("%d\n",j);}
        }
        return 0;
}
