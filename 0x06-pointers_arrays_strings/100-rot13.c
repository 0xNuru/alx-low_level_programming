/**
* rot13 - function name
* @str: string to be encoded
*
* Description: a function that eccodes a str using rot13
* Return: encoded str
*/

char *rot13(char *str)
{
	int i, j;

	char alpha[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (str[i] == alpha[j])
			{
				str[i] = rot13[j];
				break;
			}

		}
	}
	return (str);
}
