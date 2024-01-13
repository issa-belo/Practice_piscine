#include<unistd.h>

void ft_print_numbers(void)
{
	short j=48;
	while(j<58)
	{
		write(1, &j, 1);
		j++;
	}
}

int main()
{
	ft_print_numbers();
}
