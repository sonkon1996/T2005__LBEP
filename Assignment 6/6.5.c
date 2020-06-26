#include <stdio.h>
int main(){
	int ary[6] = {15,1,9,23,77,4};
	int a = 9;
	int i=0;
	for(i=0;i<6;i++){
		if(ary[i] == a){
			break;
		}
	}
	if(i>=6){
		printf("ko co trong mang");
	}else{
		printf("co trong mang");
	}
}
