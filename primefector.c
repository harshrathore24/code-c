#include<stdio.h>

void primefactor(int num)
{
    int isPrime;
    for(int i=1; i<num; i++)
    {
        if(num%i==0)
        {
            isPrime = 1;
            for( int j=2; j<=i/2; j++)
            {
                if(i%j==0)
                {
                    isPrime = 0;
                    break;
                }
            }

            if(isPrime==1)
            {
                printf("%d ", i);
            }
        }
    }

}
int main()
{
    int n;
    printf("Enter the number-->");
    scanf("%d",&n);
    primefactor(n);

    return 0;
}
