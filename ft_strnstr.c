/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bessabri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 13:45:56 by bessabri          #+#    #+#             */
/*   Updated: 2024/10/26 18:56:08 by bessabri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t  i;
	size_t	j;
	size_t	little_len;

	i = 0;
	if (!*little)
	{
		return ((char *)(big));
	}
    if (!big)
    return (NULL);
little_len = ft_strlen(little);
if (len < little_len)
return (NULL);
	while (big[i] && i <= len - little_len)
	{
		j = 0;
		while (little[j] && big[i + j] && little[j] == big[i + j] && (i + j) < len)
		{
			if (little[j + 1] == '\0')
			{
				return ((char *)(big + i));
			}
			j++;
		}
		i++;
	}
    return (0);
}
int main()
{
    const char *big = "heworlddddllw ";
    const char *little = "";
    char *res =ft_strnstr(big,little,4);
    printf("%s\n",res);
}
