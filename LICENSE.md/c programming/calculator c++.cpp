#include<iostream>
using namespace std;
int main(){
	int num1 , num2, result;
	char op;
	
	do{
		cout <<"\nenter first number: ";
		cin >>num1;
		
		cout <<"\nenter operator +,-,*,/,%: ";
		cin >>op;
		
		
		cout <<"\nenter second number: ";
		cin >>num2;
		
		
		if(op == '+') result = num1 + num2;
        
		if(op == '-') result = num1 - num2;
		
		if(op == '*') result = num1 * num2;
		
		if(op == '/') result = num1 / num2;
 
		if(op == '%') result = num1 % num2;
	
	 cout <<"\n the result is : "<<result;
	}while(op = 'e');
	
	return 0;
}
