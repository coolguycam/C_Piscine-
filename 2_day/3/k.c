#include <unistd.h>

int		putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	isNegative(int n)
{
	if (n < 0)
		putchar('N');
	else if (n > 0)
		putchar('P');
	else
		putchar('0');
}

int 	main()
{
	isNegative(9);
	putchar('\n');
	isNegative(-3);
	putchar('\n');
	isNegative(0);
	putchar('\n');
	return (0);
}
