#include <stdio.h>
//TODO: Include appropriate header file for dynamic memory allocation
#include <stdlib.h>
int main()
{
	long n;
	int max;

	//Get the number of integers from the user
	scanf("%ld", &n);

	//Do not add/modify anything about this line
	//TODO: Complete the code
	int *array=malloc(sizeof(int)*n);
for(int i =0;i<n;i++)
{	
scanf("%d",&array[i]);
}	
int *head=array;
max=*head;
for(int i=1;i<n;i++)
{if(max<*(head+i))
{max=*(head+i);}
}
        //TODO: DO NOT FORGET TO FREE ANY MEMORY ALLOCATED USING malloc() using
         free(array);

	
	//Do not add/modify anything below this line
	printf("%d\n", max);
	return 0;
}

