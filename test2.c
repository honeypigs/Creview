#include <stdio.h>
#include <math.h>

int squ() {
	double a,b,c,der,p,q,x1,x2;
	printf("input a,b,c\n");
	scanf("%lf,%lf,%lf",&a,&b,&c);
	der = b * b - 4 * a * c;
	if(der < 0) {
		printf("no real roots\n");
	} else {
		p = -b / (2 * a);
		q = sqrt(der) / (2 * a);
		x1 = p + q;
		x2 = p - q;
		printf("x1 = %f\nx2 = %f",x1,x2);
	}
	return 0;
}

char change(){
	char a;
	printf("input char\n");
	scanf("%c",&a);
	a = (a > 'A' && a < 'Z') ? (a + 32) : a;
	printf("a=%c",a);
	return 0;
}

int getnumbers() {
	char s[50];
	char c;
	int i;
	for(i = 0;((c = getchar()) != '\n') && (i < 50); i ++){
		if (c < '1' || c > '9') {
				printf("wrong input\n");
				return 1;
			}
			s[i] = c;
	}
	if(i > 49){
		printf("long number\n");
		return 1;
	} else {
		printf("number is %d\n",i);
		for(i - 1; i > -1; i--){
			printf("%c",s[i]);
		}
	}
	return 0;
}


int main() {
	// squ();
	// change();
	getnumbers();
	return 0;
}
