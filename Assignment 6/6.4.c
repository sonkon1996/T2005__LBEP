#include <stdio.h>

int main(){
	int ary[5] = {5,1,7,3,2};
	
	for(int i=0;i<5-1;i++){
		for(int j=0;j<5-1-i;j++){
			if(ary[j]> ary[j+1]){
				int temp = ary[j];
				ary[j] = ary[j+1];
				ary[j+1] =temp;
			}
		}
	}
	
	printf("mang sau khi sap xep:\n");
	for(int i=0;i<5;i++){
		printf("%d\t",ary[i]);
	}
}
