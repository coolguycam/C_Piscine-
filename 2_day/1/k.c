#include <unistd.h>

int		putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void printrevalpha(void)
{
	int i;

	i = 123;
	while(i-- > 97)
		putchar(i);
}

int 	main()
{
	printrevalpha();
	return (0);
}
