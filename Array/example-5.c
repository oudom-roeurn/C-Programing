#include<stdio.h>
int main(){
   int i,n;
   float arr[100];
   printf("Enter total number of element(1 to 100): ");
   scanf("%d",&n);
   printf("\n");
   // stores number entered by the user
   for(i=0;i<n;++i){
   	printf("Enter number %d: ",i+1);
   	scanf("%f",&arr[i]);
   }	
   //loop to store largest number to arr[0]
   for(i=1;i<n;i++){
   //chang <to> if you want to find the smallest element
   if(arr[0]<arr[i])
      arr[0]=arr[i];
}
    printf("Largest element = %.2f",arr[0]);
    return 0;
}
