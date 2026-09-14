//#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

/*int	main(void)
{
	printf("%d\n", ft_strncmp("test", "tezt", 2));
	return (0);
}*/

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] && s2[i] && i <= n - 1)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;	
	}
	return (0);
}
