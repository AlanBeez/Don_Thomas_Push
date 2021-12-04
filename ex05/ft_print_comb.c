#include <unistd.h>

void	ft_print_comb(void)
{	
	int n1;
	int n2;
	int n3;
	
	n1 = 48 - 1;
	
	while (++n1 <= 57)
	{
		n2 = n1;
		
		while (n2++ <= 57)
		{
			n3 = n2;

			while (++n3 <= 57)
			{
				write(1, &n1, 1);
				write(1, &n2, 1);
				write(1, &n3, 1);
					if(n1 != 55)
						write(1, ", ", 2);
			}
		}
       	}			
}
