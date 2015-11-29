#include "libft.h"
#include <stdio.h>
#include <string.h>
int main()
{
	char buf[] = "un deux 9";
	printf("%s\n", ft_strnstr(buf, "9", 3));
	printf("\n%s", strnstr(buf, "9", 3));
	return 0;
}
