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
for(int i=0; i<n; i++){
  for(int j=0; j<n-1; j++){
    if(arr[j]>arr[i]){
      int temp = arr[j];
      arr[j]=arr[i];
      arr[i]=temp;
    }
  }
}
printf("Finally : ");
for(int i=0; i<n; i++){
  printf("%d ",arr[i]);
}

}
