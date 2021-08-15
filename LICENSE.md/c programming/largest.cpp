#include<stdio.h>
int main(){
	
//	declaring variable

int a,b,c,large;

printf("enter a: \n");
scanf("%d",&a);

printf("enter b: \n");
scanf("%d",&b);


printf("enter c: \n");
scanf("%d",&c);
	
//logic start from here

if(a > b && a > c){
	printf("a is largest");
}else if(b > a && b > c){
	printf("b is largest");
}else{
	printf("c is largest");
}
	
	
}
