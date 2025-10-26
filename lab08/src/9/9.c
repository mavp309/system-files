#include <stdio.h>
//TODO: Include appropriate header file for dynamic memory allocation
#include <stdlib.h>

int main()
{
	long size = 0;
	char* str = NULL;

	scanf("%ld", &size);

	//Do not add/modify anything about this line
	//TODO: Complete the code
	char *array=malloc(sizeof(char)*size);

scanf("%s",array);
str= array;
char*go=array;
	while(*go!='\0')
{go++;}
go--;
while(go!=str){
printf("%c",*go);
go--;
}
printf("%c\n",*str);
        //TODO: DO NOT FORGET TO FREE ANY MEMORY ALLOCATED USING malloc() using
        free(array); 

	//Do not add/modify anything below this line
	return 0;
}

