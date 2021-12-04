#include <unistd.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_numbers(char n2, char n3, char n4, char n5)
{
	ft_putchar(n4);
	ft_putchar(n5);
	ft_putchar(' ');
	ft_putchar(n2);
	ft_putchar(n3);
	ft_putchar(',');
	ft_putchar(' ');

}

void	ft_print_comb2(void)
{
	
	char n1;
	char n2;
	char n3;
	char n4;
	char n5;

	n1 = '0';
	n2 = '0';
	n3 = '0';
	n4 = '0';
	n5 = '1';
	while (n2 <= '9')
	{
		while (n3 <= '9')
		{
			while (n4 <= '9')
			{
				while (n5 <= '9')
				{
					ft_print_numbers(n2, n3, n4, n5);
					n5++;
				}
				n5 = n1;
				n4++;
			}
			n4 = n1;
			n3++;
		}
		n3 = n1;
		n2++;
	}
	return;
}


int main(){
	ft_print_comb2();
}
