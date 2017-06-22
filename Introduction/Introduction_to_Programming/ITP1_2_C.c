#include <stdio.h>

int main(void)
{
	int a,b,c;
	int tmp;

	scanf("%d %d %d",&a,&b,&c);

	if(c <= a)
	{
		tmp = a;
		a = c;
		c = tmp;
	}
	if(b <= a)
	{
		tmp = a;
		a = b;
		b = tmp;
	}
	if(c <= b)
	{
		tmp = c;
		c = b;
		b = tmp;
	}

	printf("%d %d %d\n",a,b,c);
	return 0;
}