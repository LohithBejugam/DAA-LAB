#include<stdio.h>
int main(){
	int n;
	printf("enter a nth natural number: ");
	scanf("%d",&n);
	int a=0,b=1,c;
	for(int i=0;i<n;i++){
		printf("%d\n",a);
		c=a+b;
		a=b;
		b=c;
		if(a>=n){
			break;
		}
	}
	return 0;
}