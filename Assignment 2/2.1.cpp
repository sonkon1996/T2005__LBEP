#include <stdio.h>

int main(){
	int a,b,c;
	printf("nhap a=\n");
	scanf("%d",&a);
	printf("nhap b=\n");
	scanf("%d",&b);
	printf("nhap c=\n");
	scanf("%d",&c);
	
	if(a >b){
		if(a > c){
			printf("Max: %d",a);
		}else{
			printf("Max: %d",c);
		}
	}else{
		if(b > c){
			printf("Max: %d",b);
		}else{
			printf("Max: %d",c);
		}
	}
}
