// Array to pointer
#include<stdio.h>
int main(){
	int x[4];
	int i;
	for(i=0;i<4;++i){
		printf("&x[%d]= %p\n",i,&x[i]);
	}
	printf("Address of Array x: %p",x);
}
