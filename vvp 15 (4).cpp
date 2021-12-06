#include <iostream>
using namespace std;

int Quarter(float x, float y) {
	if (x > 0 && y > 0) return 1;
	if (x < 0 && y > 0) return 2;
	if (x > 0 && y < 0) return 3;
	if (x < 0 && y < 0) return 4;
}

int main()
{
	setlocale(0, "");
	float x_cord[3];
	float y_cord[3];
	for (int i = 0; i < 3; i++) {
		cout << "Введите координаты: ";
		cin >> x_cord[i]; cin >> y_cord[i];
		cout << "Четверть: " << Quarter(x_cord[i], y_cord[i]);
	}
	return 0;
}