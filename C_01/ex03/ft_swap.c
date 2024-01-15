#include<stdio.h>

void ft_swap(int *a, int *b)
{
	 *a=6;
	 *b=7;
	 int ptr = *a;
	 *a = *b;
	 *b = ptr;
	 

}
int main()
{
	int rev_a;
	int rev_b;
	ft_swap(&rev_a, &rev_b);

	printf("a is%d\nb is%d\n", rev_a, rev_b);
}
