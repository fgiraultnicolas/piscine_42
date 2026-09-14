/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgirault <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/14 06:21:08 by fgirault          #+#    #+#             */
/*   Updated: 2026/09/14 07:07:19 by fgirault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

/*int	main(void)
{
	char	dest[] = "Hello World";
	char	src[] = "test";

	ft_strncpy(dest, src, 8);
	return (0);
}*/

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i <= n - 1 && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i <= n - 1)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
