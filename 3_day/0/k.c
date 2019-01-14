#include <stdio.h>

int		ft(int *nbr)
{
	*nbr = 42;
	return (42);
}

int		main()
{
	int i;
	int *pt;

	i = 5;
	pt = &i;
	ft(pt);
	printf("%d", i);
	return (0);
}
