#include<stdio.h>
int main(){
    int n=0,sum1,sum2;
    int a[100];
    printf("enter the size");
    scanf("%d",&n);
   for(int i=0;i<n;++i){
        scanf("%d",&a[i]);
    }
  for(int i=0;i<n-1;i++){
      sum1=sum1+a[i];
   }
   printf("%d",sum1);
   for(int i=1;i<n;i++){
    sum2=sum2+a[i];
   }
   printf("%d",sum1);
   return 0;

}
