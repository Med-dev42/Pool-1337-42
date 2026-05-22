#include <stdlib.h>

int     *ft_range(int start, int end)
{
	int *res;
	int i;
	int n;
	int step;

	if (start <= end)
        {
                n = (end - start) + 1;
                step = 1;
        }
        else
        {
                n = (start - end) + 1;
                step = -1; 
        }

	res = malloc(n * sizeof(int));
	if (res == 0)
	{
		return NULL;
	}

	i = 0;
	while(i < n)
	{
		res[i] = start;
		i++;
		start += step;	
	}
	return res;
}
