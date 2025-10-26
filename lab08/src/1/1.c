#include <stdio.h>

// TODO: Define the struct named complex appropriately
struct complex
{double  real;
double img; };
// Avoids the need to type `struct complex` each time
typedef struct complex mycomplex;


mycomplex add(const mycomplex c1, const mycomplex c2){
	// TODO: Complete the code
mycomplex sum = {c1.real+c2.real, c1.img+c2.img};
return sum;
}

mycomplex subtract(const mycomplex c1, const mycomplex c2){
	// TODO: Complete the code
mycomplex diff={c1.real - c2.real, c1.img - c2.img};
return diff;
}

mycomplex multiply(const mycomplex c1, const mycomplex c2){
	// TODO: Complete the code
mycomplex pro={c1.real*c2.real - c1.img*c2.img, c1.real*c2.img + c1.img*c2.real};
return pro;
}

mycomplex divide(const mycomplex c1, const mycomplex c2){
	// TODO: Complete the code
mycomplex quo={(c1.real*c2.real + c1.img*c2.img)/(c2.real*c2.real+c2.img*c2.img),(c1.img*c2.real - c1.real*c2.img)/(c2.real*c2.real+c2.img*c2.img)};
return quo;
}

void print_complex(const mycomplex c){
	// TODO: Complete the code
printf("%.4lf+%.4lfj\n",c.real,c.img);
}

int main()
{
	mycomplex x, y, result;

	scanf("%lf %lf %lf %lf", &x.real, &x.img, &y.real, &y.img);

	result = add(x,y);
	printf("Sum: ");
	print_complex(result);

	result = subtract(x,y);
	printf("Difference: ");
	print_complex(result);

	result = multiply(x,y);
	printf("Product: ");
	print_complex(result);

	result = divide(x,y);
	printf("Division: ");
	print_complex(result);

	// END	
	//Do not add/modify anything below this line
	//Print the answer
	return 0;
}

