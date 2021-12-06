#include <iostream>
using namespace std;

int SignX(float &X) {
	if (X < 0) return -1;
	else if (X = 0) return 0;
	else return 1;
}

int main()
{
	setlocale(0, "");
	float A, B;
		cout << "Введите число A: ";
		cin >> A;
		cout << "Введите число B: ";
		cin >> B;
		cout << SignX(A) + SignX(B);
     return 0;
}