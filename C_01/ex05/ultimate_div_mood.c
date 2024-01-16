#include<stdio.h>

void	ultimate_div_mood(int *a, int *b)
{
	*a = 41;
	*b = 7;
	int	temp = *a;
	*a = *a / *b;
	*b = temp % *b;
	
}

int main()
{
	int x;
	int y;
	
	ultimate_div_mood(&x,&y);
	printf("div is%d\nmud is%d\n", x, y);
}
