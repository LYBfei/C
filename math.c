#include <stdio.h>
#define A 20
#define B 30
int main()
{
	int a,b,z;
	a = A;
	b = B;
	if(a<b)
		printf("%d",b);
	else
		printf("%d",a);
	z=(a>b?a:b);
	printf("%d",z);
	return 0;
}
