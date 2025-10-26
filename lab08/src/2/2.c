#include <stdio.h>
#include <limits.h>

int main()
{
	unsigned long fact = 1;
        unsigned int input;

	scanf("%d", &input);
	// Do not modify anything above this line
	// TODO: Complete the code
	long lim=LONG_MAX;
	int flag=0;
	for(int i=1;i<=input;i++)
{if(fact>lim)
{flag=1;
printf("TOO LARGE TO COMPUTE");
break;
}
else
{fact*=i;}

}
if (flag==0)
{printf("%ld",fact);}

	//Do not add/modify anything below this line
	return 0;
}

