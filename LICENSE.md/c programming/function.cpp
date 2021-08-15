#include<stdio.h>
//creating a  funtion
int sum(int a,int b);
int main(){
	int x,y;
	int d;
	printf("enter x and y : \n");
	scanf("%d%d",&x,&y);
//	calling a function
	d = sum(x,y);
	printf("the sum of two number is : %d", d);
	return 0;
}

int sum(int a,int b){
int add;
add = a + b;
return add;
}
