#include <unistd.h>
void	ft_print_reverse_alphabet(void)
{
	char alpha;
	alpha = 122;
	
		while(alpha >= 97)
		{
			write(1, &alpha, 1);
				alpha--;
		}
}

