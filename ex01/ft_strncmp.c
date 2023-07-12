/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcamoin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 18:46:52 by fcamoin           #+#    #+#             */
/*   Updated: 2023/07/12 20:22:50 by fcamoin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] && i < n)
		i++;
	return (s1[i] - s2[i]);
}

/*int     main(void)
{
        char str1[] = "qwetttgsjg";
        char str2[] = "qwettpgsjg";

        int result = ft_strncmp(str1, str2, 6);
        printf("%d",result);
}*/
