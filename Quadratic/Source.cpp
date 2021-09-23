#include <stdio.h>
#include <math.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Rus");
	float a, b, c, D, x1, x2;
	int cont;

	while (1){
		printf("\n������� ������������ ���������� ���������(a b c): ");
		scanf("%f%f%f", &a, &b, &c);

		D = powf(b, 2) - 4.0f * a * c;
		if (D < 0) {
			printf("��������� �� ����� ������ � �������������� ������");
		}
		else if (D == 0) {
			x1 = -b / 2 * a;
			printf("��������� ����� ������������ ������ = %.2f", x1);
		}
		else {
			x1 = (float)(-b - (float)sqrt(D)) / (2.0f * a);
			x2 = (-b + sqrt(D)) / (2.0f * a);
			printf("��������� ����� ��� �����:\n1-�� ������ = %.2f\n2-�� ������ = %.2f", x1, x2);
		}
		printf("\n");
		printf("\n������� 0 ����� ���������, 1 - ����������: ");
		scanf("%d", &cont);
		if (!cont) break;
	}
	return 0;
}