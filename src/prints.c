/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prints.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sipatry <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/25 11:19:13 by sipatry           #+#    #+#             */
/*   Updated: 2019/07/25 11:30:39 by sipatry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "env.h"

void	print_vertex(t_env *env, int num)
{
	int	i;
	t_list	*tmp;

	i = 0;
	tmp = env->edit.vertices;
	while(i < num)
	{
		env->edit.vertices = env->edit.vertices->next;
		i++;
	}
	ft_printf("vertex [%d]:\nx: %f y: %f\n",
	env->edit.vertices->num, env->edit.vertices->x, env->edit.vertices->y);
}

void	print_vertices(t_env *env)
{
	t_list *tmp;

	tmp = env->edit.vertices;
	while(env->edit.vertices != NULL)
	{
		ft_printf("vertex [%d]:\nx: %f y: %f\n",
		env->edit.vertices->num, env->edit.vertices->x, env->edit.vertices->y);
		env->edit.vertices = env->edit.vertices->next;
	}
	env->edit.vertices = tmp;
	ft_printf("vertex [%d]:\nx: %f y: %f\n",
	env->edit.vertices->num, env->edit.vertices->x, env->edit.vertices->y);
}
