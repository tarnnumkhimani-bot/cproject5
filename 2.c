#include <stdio.h>

int main() {

    int a[3][3], i,j,max;
    for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
                {
                    printf("enter elements:");
                    scanf("%d",&a[i][j]);
                }
        }
    max=a[0][0];
     for(i=0;i<3;i++)
         {
              for(j=0;j<3;j++)
                  {
                      if(a[i][j]>max)
                      {
                          max=a[i][j];
                      }
                  }
         }
    printf("largest element=%d",max);
    return 0;
}