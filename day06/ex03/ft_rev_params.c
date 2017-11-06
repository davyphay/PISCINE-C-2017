/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dphay <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/10 02:41:04 by dphay             #+#    #+#             */
/*   Updated: 2017/09/10 02:45:42 by dphay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int j;

	if (argc > 1)
	{
		while (argc > 1)
		{
			j = 0;
			while (argv[argc - 1][j] != '\0')
			{
				ft_putchar(argv[argc - 1][j]);
				j++;
			}
			ft_putchar('\n');
			argc--;
		}
	}
	else
		return (0);
}
