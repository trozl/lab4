#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>;
#include<locale.h>;
#include<math.h>;


void z1() {
	int i;
	char c;
	float f;
	double d;
	setlocale(LC_ALL, 0);
	printf("Введите целое число \n");
	scanf("%i", &i);
	getchar;
	printf("Целое число введенное с клавиатуры = %i\n", i);
	printf("Введите дробное число \n");
	scanf("%f", &f);
	getchar();
	printf("Дробное число введенное с клавиатуры = %f\n", f);
	//printf("Целая часть дробного числа равна %d \n Дробная часть введенного числа равна %d", f / 1, (int)f % 100);

	printf("Введите большое число");
	scanf("%lf", &d);
	getchar();
	printf("Большое число введенное с клавиатуры = %lf\n", d);
	printf("Введите символ \n");
	scanf("%c", &c);
	getchar();
	printf("Символ введенный с клавиатуры = %c\n", c);
}
void z2() {
	int n, n1, n2,n3;
	char c1, c2, c3;
	puts("Введите целое трехзначное число");
	scanf("%i", &n);
	printf("\nВаше число = %d\n", n);
	n1 = n / 100;
	n2 = n % 100 / 10;
	n3 = n % 10;
	//n1 = abs(n1);
	//n2 = abs(n2);
	//n3 = abs(n3);
	c1 = n1;


	printf("Последняя цифра введенного числа = %d\n первая цифра заданного числа = %d\n Средняя цифра числа = %d \n Сумма цифр этого числа равна %d ", n3, n1, n2, n1+n2+n3);
	printf("\nЗапись числа наоборот будет выглядеть так %d%d%d",n % 10 , n2, n1);
}

void main() {
	//z1();
	z2();
}