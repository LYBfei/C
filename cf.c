#include<stdio.h>
void main()
{
	int fahr,celsius;
	int lower,upper,step;
	lower = 0;
	upper = 300;
	step = 20;
	printf("摄氏度\tt华氏度\n");
	fahr=lower;
	while(fahr<=upper)
	{
		celsius =5*(fahr-32)/9;
		printf("%d\t%d\n",fahr,celsius);
		fahr = fahr + step;
	}
}
