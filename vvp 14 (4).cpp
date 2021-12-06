include <iostream>
using namespace std;

int main()
{
	setlocale(0, "");
	int K;
	float P, S;
	cout << "Введите число P: ";
	cin >> P;
	S = 1000; K = 0;
	while (S < 1100) {
		S = S * (1 + P / 100);
		K++;
	}
	cout << "K: " << K << " Сумма: " << S;
	return 0;
}