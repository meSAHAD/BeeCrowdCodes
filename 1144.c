#include<stdio.h>
#include "sahad.h"
void readcase()
{
    int n, a[1000001];
    scanf("%d",&n);
    for (int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
}

int mode(int a[],int n) {
   int maxValue = 0, maxCount = 0, i, j;

   for (i = 0; i < n; ++i) {
      int count = 0;

      for (j = 0; j < n; ++j) {
         if (a[j] == a[i])
         ++count;
      }

      if (count > maxCount) {
         maxCount = count;
         maxValue = a[i];
      }
   }
    printf("%d",maxValue);
}

int main()
{

    int n, a[1000001];
    scanf("%d",&n);
    for (int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    mode( a[1000001]);

    return 0;
}
