#include <stdio.h>

int main(void)
{
	int age_in_years, age_in_days;

	age_in_years = 29;
	age_in_days = age_in_years * 365;

	printf("Вы прожили %d лет, это %d дней.\n", age_in_years, age_in_days);

	return 0;
}