#include <stdio.h>
int a = 1;
int muli(int n) {
	a = a * n;
	if(n == 1){
		return a;
	} else {
		return muli(n - 1);
	}
}
int main(){
	int n;
	printf("input floor\n");
	scanf("%d",&n);
	for(int i = 0;i < n+1;i++){
		for(int j = 0;j < (n-i); j++){
			printf(" ");
		};
		for(int k = 0;k < i; k++){
			printf("*");
		};
		printf("\n");
	};
	int mulit;
	mulit = muli(n);
	printf("%d",mulit);
	return 0;
}
