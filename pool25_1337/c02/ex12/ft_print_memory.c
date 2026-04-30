#include<unistd.h>
#include<stdio.h>

void ft_putchar(char c)
{
        write(1,&c,1);
}

void ft_print_hex(unsigned long long n, int digits)
{
        char *hex;

        hex = "0123456789abcdef";
        if(digits > 1)
                ft_print_hex(n / 16,digits - 1);
        ft_putchar(hex[n % 16]);
}

void check_hex(unsigned int chunk,unsigned char *p,unsigned int i)
{
	unsigned int j;

	j = 0;
	while (j < 16)
        {
            if (j < chunk)
                ft_print_hex(p[i + j], 2); 
            else
            {
                ft_putchar(' '); 
                ft_putchar(' ');
            }
            if (j % 2 != 0)
                ft_putchar(' ');
            j++;
        }
}

void *ft_print_memory(void *addr, unsigned int size)
{
        unsigned int i;
        unsigned char *p;
        unsigned int chunk;
	unsigned int j;

        if(size == 0)
                return addr;

        p = (unsigned char *)addr;
        i = 0;
        while(i < size)
        {
                chunk = (size - i < 16) ? size - i : 16;

                ft_print_hex((unsigned long long)&p[i], 16);
                ft_putchar(':');
                ft_putchar(' ');

		check_hex(chunk,p,i);

                j = 0;
                while (j < chunk)
                {
                        if (p[i + j] >= 32 && p[i + j] <= 126)
                                ft_putchar(p[i + j]);
                        else
                                ft_putchar('.'); 
                        j++;
                }
                ft_putchar('\n');
                i += 16;
        
        }

	
	ft_putchar('\n');
        return addr;
}

int main(void)
{
    char *str = "Bonjour les aminches\t\n\0\r c  est fou\ttout\tce qu on peut faire avec\t\n\tprint_memory\n\n\n\tlol\nlol\n \n";
    
    ft_print_memory(str, 92);
    
    return (0);
}