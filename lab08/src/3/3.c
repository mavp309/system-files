#include <stdio.h>
#define ROWS 2
#define COLS 2

int main()
{
	int matrix[ROWS][COLS];

	//Get an integer from the user
	scanf("%d %d %d %d", &matrix[0][0], &matrix[0][1], &matrix[1][0], &matrix[1][1]);

	//Do not add/modify anything above this line
	//TODO: Complete the code
	float inv[2][2];
float det=matrix[0][0]*matrix[1][1]-matrix[0][1]*matrix[1][0];
	if(det!=0)
{inv[0][0]=matrix[1][1]/det;
inv[0][1]=-matrix[0][1]/det;
inv[1][0]=-matrix[1][0]/det;
inv[1][1]=matrix[0][0]/det;
for(int i=0;i<2;i++)
{for(int j=0;j<2;j++)
{printf("%.4f ",inv[i][j]);}
printf("\n");
}
return 0;

}
printf("NOT INVERTIBLE");
	//Do not add/modify anything below this line
	return 0;
}

