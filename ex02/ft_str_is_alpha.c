#include <stdio.h>

int ft_isalpha(char c)
{
    if ((c >= 'a' && c <= 'z')
        || (c >= 'A' && c <= 'Z'))
        return (1);
    return (0);
}

int ft_str_is_alpha(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if (ft_isalpha(str[i]) == 0)
            return 0;
        i++;
    }
    return 1;
}

int main ()
{
    printf("%d\n", ft_str_is_alpha("az#er"));

}