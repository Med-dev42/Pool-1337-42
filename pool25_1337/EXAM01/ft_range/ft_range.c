#include<unistd.h>

int	ft_calcul(int start, int end)
{
	int	i;

	i = 0;
	if (start == end)
        {
                return 1;
        }
	else if (start < end)
        {
                while (start <= end)
                {
                        i++;
                        start++;
                }
        }
	else if (start > end)
        {
                while (start >= end)
                {
			i++;
			start--;
                }
        }

	return i;
}
	
void	ft_number(int start, int end, int *arr)
{
	int i;

	i = 0;
	if (start <= end)
	{
		while (start <= end)
		{
			arr[i] = start;
			i++;
			start++;	
		}
	}
	else if (start > end)
	{
		while (start >= end)
                {
			arr[i] = start;
			i++;
			start--;
                }
	}
}

int     *ft_range(int start, int end)
{
	int	size;
	int	*size_nb;

	size = ft_calcul(start, end);
	size_nb = malloc(size * sizeof(int));
	if (size_nb == 0)
	{
		return NULL;
	}

	ft_number(start, end, size_nb);

	return size_nb;
}
