#include <stdio.h>
#include<math.h>
//TODO: Add appropriate header files for doing math function and to get the value of pi

int main()
{

	float y, rad, value;

	//Get an odd integer from the user
	scanf("%f", &y);

	// Use the constant M_PI to get the value of pi approximated to 20 digits.
	float p =M_PI;
	rad = y*p/180;
value = pow(sin(rad),3)+pow(cos(rad),3);

	//Do not add/modify anything about this line
	//TODO: Complete the code
	printf("%.4f",value);
	//Do not add/modify anything below this line
	return 0;
}

