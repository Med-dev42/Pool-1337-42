int	ft_atoi(const char *str)
{
	int i;
	int sig;
	int res;

	i = 0;
	sig = 1;
	res = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
	{
		i++;
	}

	if(str[i] == '-' || str[i] == '+')
        {
		if(str[i] == '-')
		{
			sig *= -1;
		}
                i++;
        }
	
	while(str[i] >= '0' && str[i] <= '9')
	{
		res = (str[i] - '0') + (res * 10);
		i++;
	}	
	return res * sig;
}
