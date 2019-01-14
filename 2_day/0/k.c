#include <unistd.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	ft_printalpha(void)
{
	int i;
	
	i = 96;
	while(i++ < 122)
		ft_putchar(i);
}

int		main()
{
	ft_printalpha();
	return (0);
}

