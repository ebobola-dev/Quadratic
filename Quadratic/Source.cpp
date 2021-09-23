#include <stdio.h>
#include <math.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Rus");
	float a, b, c, D, x1, x2;
	int cont;

	while (1){
		printf("\nВведите коэффициенты квдратного уравнения(a b c): ");
		scanf("%f%f%f", &a, &b, &c);

		D = powf(b, 2) - 4.0f * a * c;
		if (D < 0) {
			printf("Уравнение не имеет корней в действительных числах");
		}
		else if (D == 0) {
			x1 = -b / 2 * a;
			printf("Уравнение имеет единственный корень = %.2f", x1);
		}
		else {
			x1 = (float)(-b - (float)sqrt(D)) / (2.0f * a);
			x2 = (-b + sqrt(D)) / (2.0f * a);
			printf("Уравнение имеет два корня:\n1-ый корень = %.2f\n2-ой корень = %.2f", x1, x2);
		}
		printf("\n");
		printf("\nВведите 0 чтобы завершить, 1 - продолжить: ");
		scanf("%d", &cont);
		if (!cont) break;
	}
	return 0;
}