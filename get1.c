#include <ctype.h>
int getch(void);
void ungetch(int);
int getint(int *pn)
{
	int c,sign;
	while (isspace(c=getch()))
	;
	if(! isdigit (c) && c!='EOF'&&c!='+'&&c!='-')
	{
		ungetch(c);
		return 0;
		}
		sign =(c=='-') ? -1:1;
		if(c=='+'||c=='-')
			c=getch();
		for(*pn *=0;isdigi(c);c=getch())
		*pn =sign;
		if(c!='EOF')
			ungetch(c);
			return c;
	}
