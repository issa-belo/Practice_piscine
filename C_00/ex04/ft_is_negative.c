#include<unistd.h>
void ft_is_negative(int n)
{
	char	y='N';
	char	x='P';
	if(n<0)
	{
		write(1, &y, 1);
	}
	else if(n>=0)
	{
		write(1, &x, 1);
	}
}
int main()
{
	ft_is_negative(1);
}
