/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dphay <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/10 02:48:28 by dphay             #+#    #+#             */
/*   Updated: 2017/09/10 03:14:38 by dphay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
int		ft_strcmp(char *s1, char *s2);
void	ft_sort_argv(int argc, char **argv);

int		main(int argc, char **argv)
{
	int i;
	int j;

	if (argc > 1)
	{
		i = 1;
		ft_sort_argv(argc, argv);
		while (i < argc)
		{
			j = 0;
			while (argv[i][j] != '\0')
			{
				ft_putchar(argv[i][j]);
				j++;
			}
			ft_putchar('\n');
			i++;
		}
	}
	else
		return (0);
}

void	ft_sort_argv(int argc, char **argv)
{
	int		i;
	int		j;
	char	*tmp;

	i = 0;
	while (i < argc)
	{
		j = 1;
		while (j < argc - i - 1)
		{
			if (ft_strcmp(argv[j], argv[j + 1]) > 0)
			{
				tmp = argv[j];
				argv[j] = argv[j + 1];
				argv[j + 1] = tmp;
			}
			j++;
		}
		i++;
	}
}

int		ft_strcmp(char *s1, char *s2)
{
	int index;

	index = 0;
	while ((s1[index] != '\0' || s2[index] != '\0'))
	{
		if (s1[index] < s2[index])
			return (-1);
		if (s1[index] > s2[index])
			return (1);
		index++;
	}
	if (s1[index] == '\0' && s2[index] == '\0')
		return (0);
	else if (s1[index] == '\0')
		return (1);
	else
		return (-1);
}
