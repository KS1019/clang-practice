#include <stdio.h>

int main(void);
int calcDaikei(int a, int b, int h);

int main(void)
{
	printf("%d\n", calcDaikei(2, 3, 4));
	return 0;
}

int calcDaikei(int a, int b, int h)
{
	return (a + b) * h / 2;
}
