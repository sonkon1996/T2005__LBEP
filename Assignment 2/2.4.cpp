#include <stdio.h>
#include <math.h>
int main(){
	int a,b,c;
	printf("nhap a=\n");
	scanf("%d",&a);
	printf("nhap b=\n");
	scanf("%d",&b);
	printf("nhap c=\n");
	scanf("%d",&c);
	
	if(a!=0 && b!=0 && c!=0 && a+b>c && a+c>b && b+c >a){
		printf("Day la 3 canh tam giac");
		int P=  a+b+c;
		float P2 = (float)P/2;
		float S = sqrt(P2*(P2-a)*(P2-b)*(P2-c));
		printf("Chu vi: %d\n",P);
		printf("Dien tich: %f\n",S);
	}else{
		printf("Day ko la 3 canh 1 tam giac");
	}
}
