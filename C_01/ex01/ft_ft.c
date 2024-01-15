#include<stdio.h>
void ft_ft(int *nb)
{
	*nb = 42;
}
int main()
{
	 int ptr;
	ft_ft(&ptr);

	printf("%d\n", ptr);
}
