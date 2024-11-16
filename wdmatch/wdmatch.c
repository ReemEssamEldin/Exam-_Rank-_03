int	main(int ac, char **av)
{
	if (ac == 2)
	{
		int	i = 0;
		int	j = 0;
		int	k = 0;
		int	p = 0;
		char	*word1 = av[1];
		char	*word2 = av[2];

		while (word1[k] != '\0')
		{
			k++;
		}
		while (word2[j] != '\0')
		{
			if (word1[i] == word2[j])
			{
					i++;
			}
			j++;
		}
		if (i == k)
		{
			while (word1[p] != '\0')
			{
				write (1, &word[p], 1);
				p++;
			}
		}
		write (1, "\n", 1);
	}
	else
	{
		write(1, "\n", 1);
	}
	return (0);
}
