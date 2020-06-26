#include <stdio.h>
#include <string.h>

int main(){
	char s[50];
	printf("nhap chuoi:\n");
	scanf("%s",s);
	int a=0,e=0,i=0,u=0,o=0,k=0;
	for(int j=0;j<strlen(s);j++){
		switch(s[j]){
			case 'a':a++;break;
			case 'e':e++;break;
			case 'i':i++;break;
			case 'o':o++;break;
			case 'u':u++;break;
			default: k++;
		}		
	}
	printf("a: %d, ti le: %0.2f\n",a,(float)a*100/strlen(s));
	printf("e: %d, ti le: %0.2f\n",e,(float)e*100/strlen(s));
	printf("i: %d, ti le: %0.2f\n",i,(float)i*100/strlen(s));
	printf("o: %d, ti le: %0.2f\n",o,(float)o*100/strlen(s));
	printf("u: %d, ti le: %0.2f\n",u,(float)u*100/strlen(s));
	printf("con lai: %d, ti le: %0.2f\n",k,(float)k*100/strlen(s));
}
