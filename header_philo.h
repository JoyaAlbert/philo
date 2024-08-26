#ifndef HEADER_PHILO_H
# define HEADER_PHILO_H

# include <stdio.h>
# include <stdlib.h>

typedef struct t_start_data
{
    int phi_num;
    int ttd;
    int tte;
    int tts;
    int n_toeat;
} t_data;



//utils
long	ft_atoi(char *str);
int     ft_isdigit(int c);
#endif
