/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgirault <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/16 13:56:15 by fgirault          #+#    #+#             */
/*   Updated: 2026/09/17 14:16:17 by fgirault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb);
int	ft_int_len(int nb);
char	reverse_str(char *str, int nb);

int	main(void)
{
	ft_putnbr(12345);
	return (0);
}

void	ft_putnbr(int nb)
{
	int	const_nb;
	char	char_nb[ft_int_len(nb)];
	int	i;

	const_nb = nb;
	i = 0;
	while (nb != 0)
	{
		char_nb[i] = nb % 10 + 48;
		nb  = (nb - (nb % 10)) / 10;
		i++;
	}
	while (reverse_str(char_nb, const_nb) != '\0')
	{
		write(1, reverse_str(char_nb, const_nb), 1);
		reverse_str++;
	}
}

int	ft_int_len(int nb)
{
	int	int_len;

	int_len = 0;
	while(nb != 0)
	{
		nb  = (nb - (nb % 10)) / 10;
		int_len++;
	}
	return(int_len);
}

char	reverse_str(char *str, int nb)
{
	int	i;
	char	output_str[ft_int_len(nb)];

	i = 0;
	while (i <= ft_int_len(nb))
	{
		output_str[i] = str[ft_int_len(nb) - i - 1];
		i++;
	}
	return (&output_str);
}
