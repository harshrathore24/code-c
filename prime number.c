#include<stdio.h>

int sumPrime(number)
{

  int counter;
  int sum=0;

  for(counter=2;counter<=(number/2);counter++)
  {

     sum=counter;
     counter++;
     sum+=counter;
  }
  return sum;
 }

