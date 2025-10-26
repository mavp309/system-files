/** 
 * This program is supposed to compute the factorial
 *
 * Figure out what is the issue and fix it using GDB 
 *
 **/


#include <stdio.h>
      
long factorial(int n)
{
    long result=1;
    while(n>0)
    {
        result*=n;
n--;
    }
    return result;
}

int main()
{
    int n;
    scanf("%d",&n);
    long val=factorial(n);
    printf("%ld\n",val);
    return 0;
}
