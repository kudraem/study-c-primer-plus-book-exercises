#include <stdio.h>

int main(void)
{
	char name[20];

	printf("Введите ваше имя: ");
	scanf("%s", name);

	printf("\"%s\"\n", name);
	printf("\"%20s\"\n", name);
	printf("\"%-20s\"\n", name);

	return 0;
}