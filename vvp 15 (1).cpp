#include <iostream>
using namespace std;

float PowerA3(float A, float &B) {
	B = A * A * A;
	return B;
}

int main()
{
	setlocale(0, "");
	float x[5]; float y[5];
	for (int i = 0; i < 5; i++) {
		cout << "Введите число: ";
			cin >> x[i];
	}
	for (int i = 0; i < 5; i++) {
		PowerA3(x[i], y[i]);
		cout << y[i] << " ";
	}
return 0;
}