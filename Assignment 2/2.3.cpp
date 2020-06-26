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
	
	if(a == 0){
		if(b == 0){
			if(c == 0){
				printf("pt vo so nghiem");
			}else{
				printf("pt vo nghiem");
			}
		}else{
			float x = -(float)c/b;
			printf("Nghiem cua pt: %f",x);
		}
	}else{
		int d = b*b- 4*a*c;
		if(d < 0){
			printf("pt vo nghiem");
		}else{
			if(d == 0){
				float x = -(float)b/(2*a);
				printf("nghiem cua pt: %f",x);
			}else{
				float x1,x2;
				x1 = (-b - sqrt(d))/(2*a);
				x2 = (-b + sqrt(d))/(2*a);
				printf("Nghiem thu nhat: %f\n",x1);
				printf("Nghiem thu hai: %f\n",x2);
			}
		}
	}
}
