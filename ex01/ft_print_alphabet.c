#include <unistd.h>

void	ft_print_alphabet(void)
{
	char alpha;
	alpha=97;
	while (alpha <= 122)
	{	
		write(1, &alpha, 1);
		alpha++;
	}		
}
			
	

		

