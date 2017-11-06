/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dphay <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/07 02:25:17 by dphay             #+#    #+#             */
/*   Updated: 2017/09/07 21:41:44 by dphay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	ft_print_last_block(unsigned int m, unsigned int size, void *a);
void	ft_putnbr_base_format(int nbr, char *base, int format);
void	ft_print_block(void *addr, unsigned int nbr_lim);
void	ft_result(void *addr, void *a, unsigned int size, unsigned int m);

void	*ft_print_memory(void *addr, unsigned int size)
{
	void			*a;
	unsigned	int	m;

	m = 0;
	a = addr;
	if (size == 0)
		return (0);
	ft_result(addr, a, size, m);
	return (addr);
}

void	ft_result(void *addr, void *a, unsigned int size, unsigned int m)
{
	while ((a - addr) < size || (a - addr) % 16 > 0)
	{
		if ((a - addr) % 16 == 0)
		{
			ft_putnbr_base_format((int)a, "0123456789abcdef", 8);
			ft_putchar(':');
			ft_putchar(' ');
			m++;
		}
		if ((a - addr) % 2 == 0 && (a - addr) % 16 != 0)
			ft_putchar(' ');
		if ((a - addr) < size)
			ft_putnbr_base_format(*(char *)a++, "0123456789abcdef", 2);
		else
		{
			ft_putchar(' ');
			ft_putchar(' ');
			a++;
		}
		if ((a - addr) % 16 == 0)
			ft_print_last_block(m, size, a);
	}
}

void	ft_print_last_block(unsigned int m, unsigned int size, void *a)
{
	if (m <= size / 16)
		ft_print_block(a - 16, 16);
	else
		ft_print_block(a - 16, size % 16);
}

void	ft_putnbr_base_format(int nbr, char *base, int format)
{
	int	base_size;
	int	i;
	int tmp[1000];

	base_size = 16;
	i = 0;
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr = -nbr;
	}
	while (nbr > 0)
	{
		tmp[i] = nbr % base_size;
		nbr = nbr / base_size;
		i++;
	}
	while (format > i)
	{
		ft_putchar(base[0]);
		format--;
	}
	while (i-- > 0)
		ft_putchar(base[tmp[i]]);
}

void	ft_print_block(void *addr, unsigned int nbr_lim)
{
	void	*a;

	ft_putchar(' ');
	a = addr;
	while (a - addr < nbr_lim)
	{
		if (*(char *)a < 32 || *(char *)a > 126)
			ft_putchar('.');
		else
			ft_putchar(*(char *)a);
		a++;
	}
	ft_putchar('\n');
}
