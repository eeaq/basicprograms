#include <stdio.h>
//#include <stdlib.h>
int main()
{
	float length = 0;
	float width = 0;
	float perimeter = 0;
	printf("\n Enter the lenght of the rectangle:");
	scanf("%f", &length);
	printf("\n Enter the width of the rectangle:");
	scanf("%f", &width);
	perimeter = 2*(length*width);
	printf("\n Perimeter is: %f units",perimeter);
	//system("pause");
	return 0;
}
