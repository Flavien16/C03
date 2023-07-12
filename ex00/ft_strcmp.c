/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcamoin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 16:08:02 by fcamoin           #+#    #+#             */
/*   Updated: 2023/07/12 20:22:16 by fcamoin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i])
		i++;
	return (s1[i] - s2[i]);
}

/*int	main(void)
{
	char str1[] = "qwerty";
	char str2[] = "qweraui";

	int result = ft_strcmp(str1, str2);
	printf("%d",result);
}*/	
