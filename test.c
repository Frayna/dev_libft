
#include "libft.h"
#include "stdio.h"
#include "stdlib.h"
int main()
{
	char *buf = "aabbbaabaaa";
	ft_putstr(ft_strstr(buf, "baaa"));
	return(0);
}
