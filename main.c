#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	//preject 01
	
	int x, y, z, m;
	int a, b, c;
	
	
	x=1;
	a=3;
	b=4;
	c=5;
	z=3;
	
	
	y=m*x+b;
	y=a*x*x+b*x+c;
	m=(x+y+z)/3;
	
	printf("y=%d, m=%d\n", y, m); 
	
	
	//project 02
	
	int d=3;
	int cond1, cond2;
	
	cond1=2<d&&d<5;
	cond2=d>1||d<4&&d>3;
	
	printf("cond1=%d, cond2=%d\n", cond1, cond2);
	
	
	
	//project 03
	int q;
	int p;
	
	printf("input two integer : ");
	scanf("%d %d", &q, &p);
	
	printf("+ is %i\n: ", q+p);
	printf("- is %i\n: ", q-p);
	printf("* is %i\n: ", q*p);
	printf("/ is %i\n: ", q/p);
	printf("%% is %i\n: ", q%p);
	
	
	
	return 0;
}
