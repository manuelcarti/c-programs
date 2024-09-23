//volume
#include<stdio.h>
#define PI 3.14159

int main(){
	float radius,height,volume;
	printf("enter radius:");
	scanf("%f",&radius);
	
	printf("enter the height:");
	scanf("%f",&height);
	
	volume = PI *radius*radius*height;
	printf("the volume is:%.2f\n",volume);
	
	
	return 0;
	
}
