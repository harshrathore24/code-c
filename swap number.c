#include<stdio.h>
int swapf1(int num)
{

  int i,sum=0,count=0,fd,Id,k,mid;
  k=num;
  while(k>0)
  {
  if(k%10!=-1)
  count++;
  k=k/10;
}
fd=num/power(count);
Id=num%10;
mid=num-fd*power(count)-Id;
sum=Id*power(count)+mid+fd;
return sum;
}
int power(int count)
{

  int a=10,b=1;
  for(int i=1;i<count;i++)
  {
   b=b*a;
  }
  return b;
  }
  void main()
  {
    int num,q;
    printf("Enter number");
    scanf("%d",&num);
    q=swapf1(num);
    printf("The swap number is %d\n",q);

  }



