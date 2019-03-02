#include <stdio.h>

int divisor() {
	int m,n,temp,mul;
	printf("input m,n\n");
	scanf("%d,%d",&m,&n);
	mul = m * n;
	if(m<n) {
		temp = m;
		m = n;
		n = temp;
	}
	while(m%n != 0) {
		temp = m;
		m = n;
		n = temp%n;
	}
	printf("max divisor is %d\n",n);
	printf("max multiple is %d\n",mul/n);
	return 0;
}

int sumnum() {
	int a,n,sum = 0,temp;
	printf("input a,n\n");
	scanf("%d,%d",&a,&n);
	temp = a;
	for(int i = 1; i <= n ; i++){
		sum += a ;
		a = temp + 10 * a;
	}
	printf("%d",sum);
	return 0;
}

int main() {
	// divisor();
	sumnum();
	return 0;
}