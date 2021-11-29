#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[512] = { 0 };
	int i = 0;

	printf("Input>");
	gets_s(str, sizeof(str));

	for (i = 0; i < (int)strlen(str); i++)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		else if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
	}

	printf("Output>");
	printf("%s", str);

	return 0;

}