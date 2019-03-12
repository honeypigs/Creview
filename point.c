#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int comp(int *a,int *b,int *c) {
	int temp;
	if(*a > *b) {
		temp = *a;
		*a = *b;
		*b = temp;
	}
	if(*a > *c) {
		temp = *a;
		*a = *c;
		*c = temp;
	}
	if(*b > *c) {
		temp = *b;
		*b = *c;
		*c = temp;
	}
	printf("%d<%d<%d\n",*a,*b,*c);
	// char temp[20];
	// if(strcmp(a,b) > 0) {
	// 	strcpy(temp,a);
	// 	strcpy(a,b);
	// 	strcpy(b,temp);
	// }
	// if(strcmp(a,c) > 0) {
	// 	strcpy(temp,a);
	// 	strcpy(a,c);
	// 	strcpy(c,temp);
	// }
	// if(strcmp(b,c) > 0) {
	// 	strcpy(temp,b);
	// 	strcpy(b,c);
	// 	strcpy(c,temp);
	// }
	// printf("%s<%s<%s\n",a,b,c);
	return 0;
}

int move(int *p ,int n,int m) {
	int b[m],k = 0;
	for(int i = (n-m);i < n;i++,k++) {
		b[k] = * (p + i);
	}
	for(int j = n - m - 1 ; j >= 0 ; j--) {
		*(p + j + m) = *(p + j);
	}
	for(k = 0 ;k < m ; k ++) {
		*(p + k) = b[k];
	}
	return 0;
}
int main() {
	int a[50],n,m, *p;
	printf("input how many numbers n < 50?\n");
	scanf("%d",&n);
	printf("input numbers\n");
	for(int i = 0; i < n; i ++) {
		scanf("%d",&a[i]);
	}
	p = a;
	printf("input move numbers\n");
	scanf("%d",&m);
	move(p,n,m);
	for(int i = 0; i < n ;i ++) {
		printf("%d - ",*(p + i)  /*a[i]*/);
	}
	// int a,b,c,*p1,*p2,*p3;
	// printf("input number\n");
	// scanf("%d,%d,%d",&a,&b,&c);
	// p1 = &a;
	// p2 = &b;
	// p3 = &c;
	// char a[20],b[20],c[20],*p1,*p2,*p3;
	// printf("input string\n");
	// gets(a);
	// gets(b);
	// gets(c);
	// p1 = a;
	// p2 = b;
	// p3 = c;
	// comp(p1,p2,p3);
	// printf("%d<%d<%d\n",a,b,c);
	return 0;
}