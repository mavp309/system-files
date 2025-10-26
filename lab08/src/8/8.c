#include <stdio.h>


/**
 * SumDigits is a recursive function takes in a positive number and computes
 * the sum of all its digits till it becomes a single digit number.
 *
 * @arg num An integer
 */ 
int SumDigits(const int num){
int n=num;
if(n>=10)
{int sum=0;
while(n>0)
{int dig=n%10;
sum+=dig;
n=n/10;}
return SumDigits(sum);}
return num;
}

int main()
{
	int input, result;

	scanf("%d", &input);
	//Do not add/modify anything about this line
	//TODO: Complete the code
	result=SumDigits(input);

	//Do not add/modify anything below this line
	printf("%d\n", result);
	return 0;
}

