#include "header_philo.h"

int datatake(char **argv, t_data *data)
{
	int i;
	int	j;

	i = 0;
	while (argv[i] != NULL)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			if (ft_isdigit(argv[i][j]) == 0)
			{
				printf("a");
				return -1;
			}
			j++;
		}
		i++;
	}
	data->phi_num = ft_atoi(argv[1]);
	data->ttd = ft_atoi(argv[2]);
	data->tte = ft_atoi(argv[3]);
	data->tts = ft_atoi(argv[4]);
	if (argv[5] != NULL)
		data->n_toeat = ft_atoi(argv[5]);
	return 0;
}

int mutexcreate(t_data *data)
{
	int	i;

	i = 0;
	while(i < data->phi_num)
	{
		if(pthread_mutex_init(&data->mutex[i], NULL) != 0)
			return (-1);
	}
	return 0;
}

int  startdata(t_data *data)
{
	data->threads = malloc(sizeof(pthread_t *) * (data->phi_num));
	if (data->threads == NULL)
		return (-1);
	data->mutex = malloc(sizeof(pthread_mutex_t *) * (data->phi_num));
	if (data->threads == NULL)
		return (-1);
	if (mutexcreate(data) == -1)
		retrun (-1);
}

int	main(int argc, char **argv)
{
	t_data *data;

	data = NULL;
	if (argc < 5 || argc > 6)
		printf("Input example-> ./philo 5 800 200 200 7(optional)\n");
	else
	{
		if(datatake(argv, data) == -1)
			return (0);
		if(startdata == -1)
			return (0);
	}
	return (0);
}
