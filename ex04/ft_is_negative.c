/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_is_negative.c                                 .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: thervoue <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/07 19:19:14 by thervoue     #+#   ##    ##    #+#       */
/*   Updated: 2019/07/07 19:20:08 by thervoue    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <unistd.h>

int	ft_putchar(char c);

void	ft_is_negative(int n)
{
		if (n < 0)
		{
		write(1, "N", 1);
		}
		else
		{
		write(1, "P", 1);
		}
}