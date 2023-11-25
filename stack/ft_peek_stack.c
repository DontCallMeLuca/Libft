/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_peek_stack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgoddijn <lgoddijn@student.codam.nl >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 16:33:04 by lgoddijn          #+#    #+#             */
/*   Updated: 2023/11/25 16:45:35 by lgoddijn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

bool	ft_peek_stack(t_stack *stack, void *elem)
{
	void	*src;

	if (!stack || ft_is_empty_stack(stack))
		return (false);
	src = (char *)stack->content + \
	(stack->top * stack->elem_size);
	ft_memcpy(elem, src, stack->elem_size);
	return (true);
}
