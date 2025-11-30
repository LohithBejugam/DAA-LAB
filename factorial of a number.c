#include<stdio.h>

int factorial(int n){
	if(n==0||n==1){
		return 1;
	}
	else{
		return n*factorial(n-1);
	}
}
int main(){
	int n,result;
	printf("enter a nth natural number: ");
	scanf("%d",&n);
	result = factorial(n);
	printf("factorial of n is %d",result);
	
	return 0;
}