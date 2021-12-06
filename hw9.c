#include <stdio.h>

struct countries
{
	char name[20];
	char country[20];
	int population;
};

int main(void)
{
	struct countries arr[3];
	int i;

	printf("Input three cities: \n");

	for (i = 0; i < 3; i++)
	{
		printf("Name>");
		scanf_s("%s", arr[i].name, sizeof(arr[i].name));
		printf("Country>");
		scanf_s("%s", arr[i].country, sizeof(arr[i].country));
		printf("Population>");
		scanf_s("%d", &arr[i].population);
	}
	
	printf("Pringting the three cities: \n");
	for (i = 0; i < 3; i++)
	{
		printf("%d. %s in %s with a population of %d people \n", i+1, arr[i].name, arr[i].country, arr[i].population);
	}
	return 0;
}