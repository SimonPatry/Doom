/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_walk_out_event.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicosia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 15:19:38 by lnicosia          #+#    #+#             */
/*   Updated: 2020/01/16 15:32:16 by lnicosia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "events_parser.h"

int		new_walk_out_event(t_env *env, t_map_parser *parser, char **line,
t_events_parser *eparser)
{
	(void)parser;
	(void)line;
	if (!(env->sectors[eparser->trigger_sector].walk_out_events =
		(t_event*)ft_realloc(env->sectors[eparser->trigger_sector].
		walk_out_events, sizeof(t_event)
		* env->sectors[eparser->trigger_sector].nb_walk_out_events,
		sizeof(t_event)
		* (env->sectors[eparser->trigger_sector].nb_walk_out_events + 1))))
		return (ft_perror("Could not realloc global events"));
	env->sectors[eparser->trigger_sector].walk_out_events[env->
	sectors[eparser->trigger_sector].nb_walk_out_events] = eparser->event;
	env->sectors[eparser->trigger_sector].nb_walk_out_events++;
	return (0);
}
