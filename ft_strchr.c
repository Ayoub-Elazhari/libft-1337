#include "libft.h"

char    *ft_strchr(const char *s, int c)
{
    int i;

    i = 0;
    while (s[i])
    {
        if ((char)c == s[i])
            return ((char *)&s[i]);
    }
    if ((char)c == '\0')
        return ((char *)&s[i]);
    return (NULL);
}