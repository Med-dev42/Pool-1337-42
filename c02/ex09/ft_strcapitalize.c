#include<stdio.h>

char *ft_strcapitalize(char *str)
{
	int i;
	int frist;

	i = 0;
	frist = 1;
	while(str[i] != '\0')
	{
		if(str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;

		if(frist == 1 && (str[i] >= 'a' && str[i] <= 'z'))
		{
			str[i] -= 32;
			frist = 0;
		}
		else if( (str[i] >= 'a' && str[i] <= 'z') || (str[i] >= '0' && str[i] <= '9'))
		{
			frist = 0;
		}
		else
		{
			frist = 1;
		}
	
		i++;
	}
	return str;
}

int main()
{
	char name[] = "alut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	printf("%s\n", ft_strcapitalize(name));
}
