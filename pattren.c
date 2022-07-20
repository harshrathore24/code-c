#include<stdio.h>
int main(){
int n,m=1;
scanf("%d",&n);
int h=n;
 int a=1;
for(int i=0;i<n;i++){
 int k=n;
    for(int j=1;j<=m;j++){
        printf("%d",k);
        k--;
    }
    m++;

    for(int i=n-1;i>=a;i--){
        printf("%d",h);
    }
        h--;
        a++;
        printf("\n");

}
return 0;
}
