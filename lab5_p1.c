/*	Author: Parker Mathewson
 *	Date: 2/29/12
 *	Comments: This program is used to calculate the area and circumfrence of a circle given the radius.
 *		We will use pointers to update two values.
 */
#include <stdio.h>
#include <stdlib.h>

void circle(float radius,float *circ_area_ptr,float *circ_circumfrence_ptr)
{
	*circ_area_ptr=(3.1415*radius*radius);
	*circ_circumfrence_ptr=(3.1415*2*radius);
}


int main(void)
{
	float radius=0,area=0,circumfrence=0;
	float* area_ptr;
	float* circumfrence_ptr;

	area_ptr=&area;
	circumfrence_ptr=&circumfrence;

	printf("Please enter the radius of a circle: ");
	fflush(stdin);
	scanf("%f", &radius);

	circle(radius,&area,&circumfrence);

	printf("The area is %.2f and the circumfrence is %.2f\n", *area_ptr, *circumfrence_ptr);

	return(0);
}
