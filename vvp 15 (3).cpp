#include <iostream>
using namespace std;

const float PI = 3.14;
float RingS(float R1, float R2) {
	return PI * R1 * R1 - PI * R2 * R2;
}

int main()
{
	setlocale(0, "");
	float r1[3]; float r2[3];
	for (int i = 0; i < 3; i++) {
		cout << "Введите радиусы R1, R2: ";
		cin >> r1[i] >> r2[i];
	}
	for (int i = 0; i < 3; i++) {
		cout << "Площадь кольца: " << RingS(r1[i], r2[i]);
	}
	return 0;
}