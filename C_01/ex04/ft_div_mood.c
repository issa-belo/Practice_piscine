#include<stdio.h>
void ft_div_mood(int a, int b, int *div, int *mood)
{
	a = 42;
	b = 9;
	*div = a / b;
	*mood = a % b;
}

int main()
{
	int x;
	int y;

	int reminder_1;
	int reminder_2;

	ft_div_mood(x, y, &reminder_1, &reminder_2);
	printf("the div is %d\nthe rem is %d\n",reminder_1, reminder_2);
}
