/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icarus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/18 13:30:05 by icarus            #+#    #+#             */
/*   Updated: 2019/05/18 14:32:52 by icarus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putnbr(int nb);
void	ft_putchar(char c);
void	ft_putstr(char *str);
int	ft_strlen(char *str);

int	main(void)
{
	int x;

	x = 1 - 45664;

	ft_putstr("hello world");
	ft_putchar('\n');
	ft_putstr("hello world have ");
	ft_putnbr(x);
	ft_putchar('\n');
}
