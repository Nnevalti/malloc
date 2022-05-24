#include <unistd.h>

void    ft_putstr(const char *str, int fd)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    write(fd, str, i);
}