#include <unistd.h>

int ft_check_error(char *base)
{
        int i;
        int j;

        i = 0;
        while (base[i])
                i++;
        if (i < 2)
                return 1;
        i = 0;
        while (base[i] != '\0')
        {
                if (base[i] == '-' || base[i] == '+' || base[i] == ' ' || (base[i] >= 9 && base[i] <= 13))
                        return 1;
                j = i + 1;
                while (base[j] != '\0')
                {
                        if (base[i] == base[j])
                                return 1;
                        j++;
                }
                i++;
        }
        return 0;
}

int ft_base_systeme(char *base, char c)
{
        int i;

        i = 0;
        while (base[i])
        {
                if (base[i] == c)
                        return i;
                i++;
        }
        return -1;
}

int ft_atoi_base(char *str,char *base)
{
        int i;
        int get;
        int res;

        i = 0;
        get = 1;
        res = 0;
        if(ft_check_error(base) == 0)
        {
                while(base[i])
                        i++;
                while(*str ==  '-' || *str == '+' || *str == ' '  || (*str >= 9 && *str <= 13))
                {
                        if(*str ==  '-')
                                get *= -1;
                        str++;
                }
                while(ft_base_systeme(base, *str) != -1)
                {
                        res = (res * i) + ft_base_systeme(base, *str);
                        str++;
                }
        }
        return res * get;
}

int main()
{
	char name[] = "Holla";
	int result;

	result = ft_atoi_base(name, "01");

	write(1,"This is result: \n",17);
	ft_putnbr(result);
	write(1,"\n",1);
	write(1,"This is test: \n",14);
	ft_putnbr(ft_atoi_base("   ---++101010", "01"));
	write(1,"\n",1);
}
