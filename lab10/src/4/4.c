//TODO: Include appropriate header file as required
#include "bigint.h"

int main()
{
	Bigint * a = malloc(sizeof(Bigint));
	initialize(a);
	read(a);

	Bigint * b = malloc(sizeof(Bigint));
	initialize(b);
	read(b);

	// TODO: Complete the main function which adds a and b and prints the
	Bigint* c=add(a,b);
	print(c);
free_bigint(a);
free_bigint(b);
free_bigint(c);
	// result
	return 0;
}

