/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtemel <mtemel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 15:17:54 by mtemel            #+#    #+#             */
/*   Updated: 2022/02/08 15:42:09 by mtemel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	unsigned int	i;

	i = 0;
	if (s)
	{
		while (s[i])
			write(fd, &s[i++], 1);
		write(fd, "\n", 1);
	}
}
/*
#include<stdio.h>
#include<fcntl.h>
int main ()
{
	char c[] = "stribgdj";
	int i = open("tempdesk.txt", O_WRONLY);
	ft_putendl_fd(c, i);
	ft_putendl_fd(c, i);
}
*/
