#include <unistd.h>

int 	putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void 	printnumbers(void)
{
	int i;

	i = 47;
	while(i++ < 57)
		putchar(i);
}

int		main()
{
	printnumbers();
	return (0);
}
