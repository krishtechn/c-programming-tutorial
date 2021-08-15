#include<stdio.h>
int main(){
	
//	declaring variable age
	int age;
	
	
	printf("enter your age: \n");
	scanf("%d",&age);
//	if statement 
	if(age >= 18){
		printf("you are voter");
	}else{
		printf("you are not voter");
	}
	
	return 0;
}
