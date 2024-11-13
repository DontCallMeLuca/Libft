/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   __envp_rm_add.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgoddijn <lgoddijn@student.codam.nl >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 14:11:32 by lgoddijn          #+#    #+#             */
/*   Updated: 2024/11/08 20:06:34 by lgoddijn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/ft_env.h"

static __always_inline t_rmadd_ret	__loop(
		char **alloc, size_t env_n,
		char **__restrict__ old,
		char **__restrict__ new)
{
	size_t	i;

	i = 0;
	while (++i < env_n + 1)
	{
		if (alloc[i - 1] == *old)
		{
			alloc[i - 1] = *new;
			free((void *)*old);
			return (RETURN);
		}
		else if (!alloc[i - 1] && *new)
		{
			alloc[i - 1] = *new;
			*new = 0;
		}
	}
	return (NARET);
}

void	__envp_rm_add(char *old, char *new)
{
	static char		**alloc;
	static size_t	env_n;
	char			**t;

	if (__loop(
			alloc,
			env_n,
			&old,
			&new) == RETURN)
		return ;
	if (!new)
		return ;
	t = (char **)ft_realloc(
			alloc, sizeof(*t) * env_n,
			sizeof(*t) * (env_n + 1));
	if (!t)
		return ;
	alloc = t;
	alloc[env_n++] = new;
}
