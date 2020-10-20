/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_generator.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfoucher <jfoucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/20 18:30:53 by jfoucher          #+#    #+#             */
/*   Updated: 2020/10/20 18:32:43 by jfoucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char	char_generator(void)
{
	return (rand() % 127);
}

char	*string_generator(void)
{
	char	*str;
	int		size;
	int		i;

	i = 0;
	size = rand() % 100;
	str = malloc(sizeof(char) * size + 1);
	while (i < size)
		str[i++] = char_generator();
	str[i] = 0;
	return (str);
}

int		main(int argc, char **argv)
{
	int		i;
	char	*str;

	i = 0;
	srand(time(0));
	while (i < 1000)
	{
		str = string_generator();
		printf("%s\n", str);
		free(str);
		i++;
	}
	return (0);
}
