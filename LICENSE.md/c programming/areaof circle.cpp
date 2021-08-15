#include<stdio.h>
int main(){
	
//	declaring variable


float radius,area;
const float pi = 3.14;
printf("enter radius: ");
scanf("%f",&radius);


//calculating area
area = pi * radius * radius;

//printing result

printf("the area of circle is : %f", area);
	
	return 0;
}
