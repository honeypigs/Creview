#include <stdio.h>
#include <math.h>

void move(char a ,char b) {
	printf("move %c -> %c\n",a,b);
}

void hanoi(int n,char a,char b,char c) {
	if(n == 1) {
		move(a,c);
	} else {
		hanoi(n-1,a,c,b);
		move(a,c);
		hanoi(n-1,b,a,c);
	}

}


int interation(float a ) {
	double x1 ,x2 ;
	x2 = 1.0;
	do{
		x1 = x2 ;
		x2 = (x1 + a / x1) / 2; 
	} while(fabs(x1-x2)>pow(10,-5));
	printf("%lf\n",x2);
	return 0;
}

void function(char * p1,char * p2) {
	printf("12");

}

int main () {
	char * p1= "abcde",* p2 = "1234567";
	printf("%s",p1);
	function(p1,p2);
	printf("%s\n%s\n",p1,p2);
	// hanoi(3,'A','B','C');
	// interation(4);
	return 0;
}