
#include <stdio.h>
int n;

void print(int a[n][n])
{
    int i, j;
    for (i=0;i<n;i++)
      for (j=0;j<n;j++)
        printf("%d ",a[i][j]);
}
int main()
{
    int a[n][n];
   printf("enter the number ");
   scanf("%d",&n);
     printf("enter the first ");
   for(int i=0;i<n;i++){
      for(int j=0;j<n;j++){
        scanf("%d",&a[i][j]);
    }
}
    print(a);
    return 0;
}
