#include <stdio.h>
#include <stdlib.h>
//TODO: Include appropriate header file for dynamic memory allocation

int main()
{
	long n;

	//Get the number of integers from the user
	scanf("%ld", &n);

	//Do not add/modify anything about this line
	//TODO: Complete the code
	int *array=malloc(sizeof(int)*n);
	for (int i=0;i<n;i++)
	{scanf("%d",&array[i]);}
	
	int *ptr=array;
	for (int i=0;i<n;i++)
	{printf("%d",*ptr);
ptr++;}
free (array);
	//TODO: DO NOT FORGET TO FREE ANY MEMORY ALLOCATED USING malloc() using
	// free() 
	//Do not add/modify anything below this line
	return 0;
}

