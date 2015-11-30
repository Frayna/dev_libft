
#include "libft.h"
#include "stdio.h"
#include "stdlib.h"
int main()
{
	char *buf = "coucou";
	char **buf2 = ft_strsplit(buf,'*');
	ft_putstr(buf2[0]);
	ft_putstr(buf2[1]);
	return(0);
}
