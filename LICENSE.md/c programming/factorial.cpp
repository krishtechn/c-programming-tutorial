#include<stdio.h>
//creating a function
int fact(int x);
int main(){
	int n,d;
	printf("enter the factorial number: \n");
	scanf("%d",&n);
//	calling a function
	d = fact(n);
	printf("the factorial number is : %d\n",d);
	return 0;
}
int fact(int x){
	if(x == 0){
		return 0;
	}else if(x == 1){
		return 1;
	}else{
		return(x*fact(x-1));
	}
}
