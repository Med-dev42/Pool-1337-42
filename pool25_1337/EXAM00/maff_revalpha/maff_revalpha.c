#include<unistd.h>

int main()
{
	char alpha;
	int i;

	alpha = 'z';
	i = 1;
	while(alpha >= 'a')
	{
		if(i % 2 != 0)
		{
			write(1,&alpha,1);
		}
		else
		{
			alpha = alpha - 32;
			write(1,&alpha,1);
			alpha = alpha + 32;
		}
		alpha--;
		i++;
	}
	write(1,"\n",1);
	return 0;
}
