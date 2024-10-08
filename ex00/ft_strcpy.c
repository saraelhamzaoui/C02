/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-hamz <sel-hamz@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 10:37:49 by sel-hamz          #+#    #+#             */
/*   Updated: 2024/09/09 12:42:58 by sel-hamz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
  return (dest);
}

/*
int    main()
{
    char *s1 = "Abc"; // 100
    char s2[10];

    ft_strcpy(s2, s1);
    int i = 0;
    while (s2[i])
    {
      write(1, &s2[i], 1);
      i++;
    }
}
*/