#include <stdio.h>
#include <stdlib.h>
int main(){
	int n,*ary;
	printf("nhap n=\n");
	scanf("%d",&n);
	ary = (int *)malloc(n*sizeof(int));
	for(int i=0;i<n;i++){
		printf("nhap pt thu %d: \n",i);
		scanf("%d",ary+i);
	}
	int count = 0,x = 0;
	for(int i=0;i<n;i++){
		if(*(ary+i)>0){
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
