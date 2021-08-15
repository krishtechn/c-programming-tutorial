//wap in c to calculate the area of rectangle enter by the user.
#include<stdio.h>
int main(){
	
//	declaring variable

int L,b,area;

printf("enter Length: \n");
scanf("%d",&L);


printf("enter breadth: \n");
scanf("%d",&b);

//calculating area
area = L * b;

//printing area


printf("the area of rectangle is : %d",area);
	
	return 0;
}
