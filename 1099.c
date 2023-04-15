#include<stdio.h>
int main()
{
    int N,X,Y,i,j,temp;
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {
        int sum=0;
        scanf("%d%d",&X,&Y);
        if (X>Y)
        {
            temp=X;
            X=Y;
            Y=temp;
        }
        for(j=X+1;j<Y;j++)
        {
            if(j%2!=0){sum=sum+j;}
        }
        printf("%d\n",sum);
    }
    return 0;
}
