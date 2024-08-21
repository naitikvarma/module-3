//Q.find the area of a rectangular prism formula : A=2(wl+hl+hw)

#include <stdio.h>

int main()
{
	int length , width , height , surfacearea;
	
	printf("\n Enter the length of the rectangular prism = ");
	scanf("%d",&length);
	
	printf("\n Enter the width of the rectangular prism = ");
	scanf("%d",&width);
	
	printf("\n Enter the hieght of the rectangular prism = ");
	scanf("%d",&height);
	
	surfacearea = 2* (width * length + height * length + height * width);
	
	printf("\nSurfacearea of the rectangular prism = %2d\n", surfacearea);
	
	return 0;
	
	
}
