#include <stdio.h>

int main(){
	int n;
	printf("nhap n=\n");
	scanf("%d",&n);
	int ary[n];
	for(int i=0;i<n;i++){
		printf("nhap pt thu %d: \n",i);
		scanf("%d",&ary[i]);
	}
	
	int m = 0;
	for(int i=0;i<n;i++){
		if(ary[i] > 0){
			m = ary[i];
			break;
		}
	}
	if(m>0){
		for(int i=0;i<n;i++){
			if(ary[i]>0&& ary[i]<m){
				m = ary[i];
			}
		}
		printf("So duong nho nhat: %d",m);
	}else{
		printf("Mang ko co so duong!");
	}
}
