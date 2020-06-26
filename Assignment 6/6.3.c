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
	int count = 0,x = 0;
	for(int i=0;i<n;i++){
		if(ary[i]>0){
			count++;
			if(count>x){
				x = count;
			}
		}else{
			count = 0;
		}
	}
	printf("So luong so duong lien tiep nhieu nhat: %d",x);
}
