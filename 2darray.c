#include<stdio.h>
int n;
int main(){
int result,n;
printf("enter the number ");
scanf("%d",&n);
int a[n][n],b[n][n];
printf("enter the first ");
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        scanf("%d",&a[i][j]);
    }
}
printf("enter the secaneds ");
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        scanf("%d",&b[i][j]);
    }
}
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        printf("%d ",a[i][j]+b[i][j]);
    }
    printf("\n");
}
return 0;
}
