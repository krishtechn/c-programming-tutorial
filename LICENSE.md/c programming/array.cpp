#include<stdio.h>
int main(){
	int n,rem,rev = 0;
	printf("enter any integer: \n");
	scanf("%d",&n);
	while(n!=0){
		rem = n % 10;
		rev = rev * 10 + rem;
		n = n/10;
	}
	if(n == rev){
		printf("palindrome");
	}else{
		printf("not palindrome");
	}
	return 0;
}
