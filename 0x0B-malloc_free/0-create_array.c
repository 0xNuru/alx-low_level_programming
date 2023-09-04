/**
* create_array - function name
* @size: size of arr
* @c: character to be assigned
*
* Description: a function that creates an array of chars
* Return: NULL if size = 0 or it fails,
* otherwise a pointer to array
*/

char *create_array(unsigned int size, char c)
{
	int *arr, i;

	if (size == 0 || arr == 0)
	{
		return (NULL);
	}
	arr = malloc(sizeof(char) * size);
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
