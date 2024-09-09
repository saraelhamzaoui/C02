/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-hamz <sel-hamz@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 12:14:43 by sel-hamz          #+#    #+#             */
/*   Updated: 2024/09/09 14:11:43 by sel-hamz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
    int i;

    i = 0;
    while (i < n && src[i] != '\0')
    {
        dest[i] = src[i];
        i++; 
    }
    if (src[i] == '\0')
        dest[i] = '\0';
    return (dest);
}

// int main()
// {
//     char source[7] = "az";
//     char destination[10];
//     ft_strncpy(destination, "khlkd", 2);
//     printf("%s\n", destination);
//     // int i = 0;
//     // while (destination[i])
//     return (0);
// }