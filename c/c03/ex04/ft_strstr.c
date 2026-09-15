/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgirault <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/15 06:00:39 by fgirault          #+#    #+#             */
/*   Updated: 2026/09/15 06:58:21 by fgirault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find);

int	main(void)
{
	printf("%s", ft_strstr("testtest", "st"));
	return (0);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	count;

	count = 0;
	while (*str != '\0')
	{
		if (*str == *to_find)
		{
			if (*to_find == '\0')
				return (str - count);
			to_find++;
			count++;
			str++;
		}
		else
		{
			to_find -= count;
			count = 0;
			str++;
		}
	}
	return (NULL);
}
