#include <stdio.h>
#include <math.h>
#include <locale.h>

void solve_square(float a, float b, float c) {
	float x1, x2, D;

	if (b == 0) {
		if (c > 0) printf("Уравнение не имеет корней в действительных числах");
		else if (c == 0) printf("Уравнение имеет единственный корень = 0");
		else {
			x1 = -sqrt(-c / a);
			x2 = sqrt(-c / a);
			printf("Уравнение имеет два корня:\n1-ый корень = %.2f\n2-ой корень = %.2f", x1, x2);
		}
	}
	else {
		if (c == 0) {
			x1 = 0;
			x2 = -b / a;
		} else {
			D = powf(b, 2) - 4.0f * a * c;
			if (D < 0) {
				printf("Уравнение не имеет корней в действительных числах");
			}
			else if (D == 0) {
				x1 = -b / 2 * a;
				printf("Уравнение имеет единственный корень = %.2f", x1);
			}
			else {
				x1 = (-b - sqrt(D)) / (2.0f * a);
				x2 = (-b + sqrt(D)) / (2.0f * a);
				printf("Уравнение имеет два корня:\n1-ый корень = %.2f\n2-ой корень = %.2f", x1, x2);
			}
		}
	}
}

void solve_linear(float b, float c) {
	float x;
	x = -c / b;
	printf("Уравнение имеет единственный корень = %.2f", x);
}

int main() {
	setlocale(LC_ALL, "Rus");
	float a, b, c;
	int cont;

	while (1){
		printf("Введите коэффициенты квдратного уравнения(a b c): ");
		scanf("%f%f%f", &a, &b, &c);
		if (a != 0) solve_square(a, b, c);
		else if (a == 0 && b != 0) solve_linear(b, c);
		else {
			if (c == 0) printf("Любое число является решением уравнения");
			else printf("Нет решений");
		}
		
		printf("\n");
		printf("\nВведите 0 чтобы завершить, 1 - продолжить: ");
		scanf("%d", &cont);
		if (!cont) break;
		else printf("\n");
	}
	return 0;
}