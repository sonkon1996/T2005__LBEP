#include <stdio.h>

int main(){
	int n;
	printf("Nhap so luong phan tu trong mang:\n");
	scanf("%d",&n);
	int ary[n];
	for(int i=0;i<n;i++){
		printf("nhap pt thu %d :\n",i);
		scanf("%d",&ary[i]);
	}
	int x;
	printf("Nhap x = \n");
	scanf("%d",&x);
	printf("mang truoc khi dich chuyen:\n");
	for(int i=0;i<n;i++){
		printf("%d\t",ary[i]);
	}
	for(int i=0;i<x;i++){
		// xoay vong so
		int tmp = ary[n-1];
		for(int j=n-1;j>=1;j--){
			ary[j] = ary[j-1];
		}
		ary[0] = tmp;
	}
	printf("\n mang sau khi dich chuyen:\n");
	for(int i=0;i<n;i++){
		printf("%d\t",ary[i]);
	}
}
