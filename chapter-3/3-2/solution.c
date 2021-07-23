#include <stdio.h>

int main(void)
{
	short ascii_code;

	printf("Введите ASCII код:\n");
	scanf("%hd", &ascii_code);
	printf("Введенный код (%hd) соответствует ASCII символу '%c'\n", ascii_code, ascii_code);

	return 0;
}