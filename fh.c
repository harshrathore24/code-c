#include<stdio.h>

 main(){
int i;
for(i=0;i<5;i++){
    static int a=0;
    int b=0;
    a++;
    b++;
    printf("%d %d",a,b);

}
return 0;
}
