#ifndef HEADER_PHILO_H
# define HEADER_PHILO_H

# include <stdio.h>
# include <stdlib.h>
# include <pthread.h>

typedef struct s_start_data
{
    int phi_num;
    int ttd;
    int tte;
    int tts;
    int n_toeat;
    pthread_t *threads;
    pthread_mutex_t *mutex;
} t_data;

typedef struct s_philos
{
    int eated;
    int fork_1;
    int fork_2;

} t_philos;



//utils
long	ft_atoi(char *str);
int     ft_isdigit(int c);
#endif
