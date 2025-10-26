#include <stdio.h>
//TODO: Add appropriate headers for dynamic memory allocation and string ops
#include<stdlib.h>
#include<string.h>
#define SIZE 50

//TODO: Define struct Student
typedef struct {
char name[SIZE];
short age;
long roll;
int marks;
}Student;
//TODO: Complete the function
Student studentcpy(Student s)
{Student cpy;
strcpy(cpy.name,s.name);
cpy.age=s.age;
cpy.roll=s.roll+100000;
cpy.marks=s.marks;
return cpy;}
// void print_details(//TODO: Add appropriate arguments)
void print_details(Student *s){
	printf("Name: %s\nAge: %d\nRoll: %ld\nMarks: %d\n", s->name, s->age, s->roll, s->marks);
}

int main()
{
	Student s;

	//Read data 
	scanf("%s", s.name);
	scanf("%hd", &s.age);
	scanf("%ld", &s.roll);
	scanf("%d", &s.marks);

	//Do not add/modify anything about this line
	//TODO: Complete the code
	Student *new=malloc(sizeof(Student));
	*new=studentcpy(s); 
	print_details(new);
        //TODO DO NOT FORGET TO FREE ANY MEMORY ALLOCATED USING malloc() using
         free(new);

	//Do not add/modify anything below this line
	return 0;
}

