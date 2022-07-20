#include<stdio.h>
int main(){
    int n,i,a[100],key;
printf("enter the size\n");
scanf("%d",&n);
for (int i=0;i<n;i++){
        printf("enter the number %d\n",i);
    scanf("%d",&a[i]);
}
printf("enter the key\n");
scanf("%d",&key);
for(int i=0;i<n;i++){
    if(key==a[i]){
        printf("%d is found a[%d]",key,i);
    break;
    }
}
if( key!=a[i]){
    printf("the number is not fount ");
    }

return 0;
}
