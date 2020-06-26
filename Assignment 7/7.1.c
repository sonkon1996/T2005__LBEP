#include <stdio.h>

int main(){
	int n;
	printf("Nhap so luong phan tu trong mang:\n");
	scanf("%d",&n);
	int ary[n];
	for(int i=0;i<n;i++){
		printf("nhap pt thu %d :\n",i);
		scanf("%d",&ary[i]);
		// sau khi nhap phai sap xep lluon
		for(int j=0;j<i;j++){
			for(int k=0;k<i-j;k++){
				if(ary[k]>ary[k+1]){
					int tmp = ary[k];
					ary[k] = ary[k+1];
					ary[k+1] = tmp;
				}
			}
		}
	};
	printf("sau khi nhap xong:\n");
	for(int i=0;i<n;i++){
		printf("%d\t",ary[i]);
	}
}
