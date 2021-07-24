#include <stdio.h>

int main(void)
{
	char first_name[40], second_name[40];

	printf("Введите ваше имя: ");
	scanf("%s", first_name);

	printf("Введите вашу фамилию: ");
	scanf("%s", second_name);

	printf("%s, %s\n", second_name, first_name);

	return 0;
}