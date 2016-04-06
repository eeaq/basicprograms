#include <stdio.h>
//#include <stdlib.h>
int main()
{
	float length = 0;
	float width = 0;
	float area = 0;
	
	printf("\n Enter rectangle length: ");
	scanf("%f", &length);
	printf("\n Enter rectangle width: ");
	scanf("%f",&width);
	area = length*width;
	printf("\n Area of rectangle: %f units",area);
	//system("pause");
	return 0;
}
