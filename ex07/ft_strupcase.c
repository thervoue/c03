/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strupcase.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: thervoue <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/15 14:25:54 by thervoue     #+#   ##    ##    #+#       */
/*   Updated: 2019/07/15 15:48:48 by thervoue    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strupcase(char *str)
{
	int i;
	
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		str[i] = str[i] -32;
		i++;
	}
	return(str); 
}

int main()
{
	char str[] = "test";
	printf("%s\n", ft_strupcase(str));
}
