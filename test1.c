#include <stdio.h>
int a , b ,temp;
int muli(int n) {
	a = a * n;
	if(n == 1){
		return a;
	} else {
		return muli(n - 2);
	}
}

int diversion() {
	printf("please input a and b\n");
	scanf("%d,%d",&a,&b);
	if(a<b){
		temp = a;
		a = b;
		b = temp;
	}
	while(a % b != 0){
		temp = a % b;
		a = b;
		b = temp;
	}
	printf("%d",b);
	return 0;
}

int main(){
	// int n;
	// printf("input floor\n");
	// scanf("%d",&n);
	// for(int i = 0;i < n+1;i++){
	// 	for(int j = 0;j < (n-i); j++){
	// 		printf(" ");
	// 	};
	// 	for(int k = 0;k < i; k++){
	// 		printf("*");
	// 	};
	// 	printf("\n");
	// };
	// int mulit;
	// mulit = muli(n);
	// printf("%d",mulit);
	// return 0;
	diversion();
}
