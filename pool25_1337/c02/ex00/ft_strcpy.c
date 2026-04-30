#
char *ft_strcpy(char *dest, char *src)
{
	if(dest == 0 || src == 0)
		return 0;

	char *start = dest;

	while(*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return start;
}

int main()
{
	char name[] = "1234sdfg";
	char dest[20];

	ft_strcpy(dest, name);
	printf("dest: %s\n",dest);

}
