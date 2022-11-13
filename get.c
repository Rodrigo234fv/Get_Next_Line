# include <fcntl.h>
# include <limits.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

static int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
		i++;
	return (i);
}

int main()
{
int fd;
int sz;
int size = 100;
char *c = (char *) calloc(100 , sizeof(char));
 
fd = open("test.txt", O_RDONLY);

sz = read(fd, c, 10);

c[sz] = '\0';
printf("Those bytes are as follows: % s\n", c);
}