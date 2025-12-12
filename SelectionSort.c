#include<stdio.h>
int main(){
int n;
printf("Enter the number:");
scanf("%d",&n);
int arr[n];
for(int i=0; i<n; i++){
  printf("Element %d = ",i+1);
  scanf("%d",&arr[i]);
}
printf("Initially : ");
for(int i=0; i<n; i++){
  printf("%d ",arr[i]);
}
printf("\n");
for(int i =0; i<n; i++){
int minindex=i;
  for(int j =i+1; j<n; j++){
    if(arr[j]<arr[i]){
      minindex=j;
    }
    
    int temp = arr[j];
    arr[i]=arr[j];
    arr[j]=temp;
  }
}
printf("Finally : ");
for(int i=0; i<n; i++){
  printf("%d ",arr[i]);
}
printf("\n");
}
