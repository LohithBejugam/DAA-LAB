#include<stdio.h>
int main(){
	int n;
	printf("enter a nth natural number: ");
	scanf("%d",&n);
	int sum;
	sum = ((n*(n+1))/2)*((n*(n+1))/2);
	printf("sum of cubes of first n natural numbers is %d",sum);
	
	return 0;
}