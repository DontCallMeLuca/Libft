/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_clear_dict.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgoddijn <lgoddijn@student.codam.nl >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 17:59:22 by lgoddijn          #+#    #+#             */
/*   Updated: 2023/11/25 16:58:13 by lgoddijn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_clear_dict(t_dict **dict, void (*del)(void *))
{
	t_dict	*next;

	if (!dict || !del)
		return ;
	while (*dict)
	{
		next = (*dict)->next;
		ft_pop_dict(*dict, del);
		*dict = next;
	}
}
