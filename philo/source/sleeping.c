/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sleeping.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrebs-l <lkrebs-l@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 02:20:31 by gcosta-d          #+#    #+#             */
/*   Updated: 2022/07/14 03:12:50 by lkrebs-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/philosophers.h"

void	philo_is_sleeping(t_list *philo)
{
	struct timeval	time;
	long			time_now;
	long			time_stopped_eating;
	int				i;

	printf("%ld ms %d is sleeping\n", time_in_ms(philo), philo->id);
	time_stopped_eating = (philo->stopped_eating.tv_sec * 1000) + \
		(philo->stopped_eating.tv_usec / 1000);
	i = 0;
	while (i < philo->philo->time_sleep)
	{
		usleep(5000);
		gettimeofday(&time, NULL);
		time_now = (time.tv_sec * 1000) + (time.tv_usec / 1000);
		if ((time_now - time_stopped_eating) > philo->philo->time_die)
			philo_is_dead(philo->philo, philo->id);
		i += 5;
	}
}
