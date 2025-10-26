#include <stdio.h>

// Define structures Rectangle and Point
//TODO: Complete the code
typedef struct {float x; float y;} Point;
typedef struct{float h;float l; Point p;} Rectangle;

Point FindCenter(const Rectangle r)
{
	//TODO: Complete the code
Point c={r.p.x + r.l/2 , r.p.y + r.h/2};
return c;


}


int main()
{
	Point corner_bl, center;
	float height, width;

	scanf("%f %f", &corner_bl.x, &corner_bl.y);
	scanf("%f %f", &height, &width);
	
	//TODO: Complete the code
Rectangle r={height,width,corner_bl};
	center= FindCenter(r);
printf("%.4f %.4f\n",center.x,center.y);

	//Do not add/modify anything below this line
	return 0;
}

