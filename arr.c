#include <stdio.h>
#include <string.h>

int trans() {
	int a[2][3] = {{1,2,3},{4,5,6}};
	int b[3][2],i,j;
	for(i = 0; i < 2; i++) {
		for(j = 0;j < 3; j++) {
			printf("%d\t", a[i][j]);
			b[j][i] = a[i][j];
		}
		printf("\n");
	}
	printf("b:\n");
	for(i = 0;i < 3 ; i++) {
		for(j =0 ;j < 2; j++){
			printf("%d\t", b[i][j]);
		}
		printf("\n");
	}
	return 0;
}

int insert() {
	int arry[7] = {1,4,8,12,19,30};
	int num,temp1,temp2;
	printf("input a number\n");
	scanf("%d",&num);
	if(num > arry[5]) {
		arry[6] = num;
	} else {
		for(int i = 0; i < 6 ; i++) {
			if(num < arry[i]) {
				temp1 = arry[i];
				arry[i] = num;
				for(int j = i + 1;j < 7 ; j++) {
					temp2 = arry[j];
					arry[j] = temp1;
					temp1 = temp2;
				}
				break;
			}
		}
	}
    for(int i = 0; i < 7; i++) {
    	printf("%d ",arry[i]);
    }
	return 0;

}

int yanghui() {
	int a[31][31] = {0};
	int n = 0;
	while(n<1 || n >30){
		printf("input a number 1-30\n");
		scanf("%d",&n);
	}
	for(int i = 0;i< n ; i++) {
		a[i][0] = 1;
	}
	for(int i = 1;i < n ; i++) {
		for(int j = 1; j <= i ; j++) {
			a[i][j] = a[i-1][j-1] + a[i-1][j];
		}
	}
	for(int i = 0; i < n ; i++) {
		for(int j = 0 ; j <= i ; j++){
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}

int main() {
	yanghui();
	// insert();
	// trans();
	return 0;
}