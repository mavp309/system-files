/*
 * Implementation of Big Integer using list in C. For details on implementation
 * of the functions, see the docstring in bigint.h.
 *
 */

//TODO: Add appropriate header files
#include "bigint.h"
#include <math.h>
// Number stored as a list with each storing 9 digits of the number
// Why 9 ? 9 = 32*log(2)/log(10)
#define POWNINE 1000000000


/*
 * Function to free memory used for a big integer
 */

void free_bigint(Bigint* bi_ptr){
	if(bi_ptr->numbers->array)
	{free(bi_ptr->numbers->array);}
	if(bi_ptr->numbers)
	{free(bi_ptr->numbers->array);}
	if(bi_ptr)
	free(bi_ptr);
	// TODO: Complete the function
}

/*
 * Initializes a big integer
 *
 */
void initialize(Bigint* bi_ptr){
	// TODO: Complete the function
if(bi_ptr){
bi_ptr->numbers=malloc(sizeof*(List));
bi_ptr->numbers->array=malloc(sizeof(int));
}
}

/*
 * Check if two big integers are equal or not
 *
 */

int equal(Bigint* a_ptr, Bigint* b_ptr){
	// TODO: Complete the function
if(a_ptr && b_ptr)
{	if(a_ptr->numbers->curr_count==b_ptr->numbers->curr_count)
		{for(int i=0;i< a_ptr->numbers->curr_count;i++)
			{if(!(a_ptr->numbers->array[i]==b_ptr->numbers->array[i]))
				return 1;
			}
		return 0;	
		}
	return 1;
}
return -1
}


/*
 * Adds two big integer numbers and returns a pointer to the resulting sum
 *
 */
Bigint* add(Bigint* a_ptr, Bigint* b_ptr)
{
	// TODO: Complete the function
}
/*
 * Print a big integer passed as argument
 */

void print(Bigint* num_ptr){
if(num_ptr)
	{for(int i=num_ptr->numbers->curr_count;i>0;i--)
	{if(i!=num_ptr->numbers->curr_count-1)
		{printf("%09ld",num_ptr->numbers->array[i-1]);
		}
	else{printf("%d",num_ptr->numbers->array[i-1]);}	
	}
	}	
	//TODO: Complete the function
}

/*
 * Read a big integer
 *
 */

int read(Bigint *num){

}
