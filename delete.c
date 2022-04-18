void dele_char(char *str, char s)
{
	char *p = str;
	char *temp = NULL;
	while (*p != '\0')
	{
		if (*p == s)
		{
			temp = p;  
			while (*p != '\0')
			{
				*p = *(p + 1);
				p++;
			}
			p = temp - 1; 
		}

		p++;
	}
}