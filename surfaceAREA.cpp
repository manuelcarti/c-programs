//surface area
#include<stdio.h>
#define PI 3.14159

int main(){
	float radius,height,surface_area;
	printf("enter radius:");
	scanf("%f",&radius);
	
	printf("enter the height:");
	scanf("%f",&height);
	
	surface_area=2*PI *radius*(radius+height);
	printf("the surface area is:%.2f\n",surface_area);
	
	
	return 0;
	
}
