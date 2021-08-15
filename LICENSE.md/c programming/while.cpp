#include<stdio.h>
#include<conio.h>
int main(){
	
	int i;
	int sum = 0;
	int num;
	printf("enter any number: \n");
	scanf("%d",&num);
	do{
		sum = sum + i;
		i++;
	}while(i <= num);
	
	printf("the sum is : %d",sum);
	
}


