
#include "libft.h"
#include "stdio.h"
#include "stdlib.h"
int main()
{
	char *buf = "Ceci n'est pas une pipe.";
	write(1, ft_strstr(buf, "une"), 5);
	ft_putchar('\n');
	write(1, strstr(buf, "une"), 5);
	return(0);
}
