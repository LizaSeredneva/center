#include <iostream>
using namespace std;

int main()
{
	setlocale(0, "");
	string direction[4] = { "C", "З", "Ю", "В"};
	int N, x;
	string C;

	cout << "Введите направление С: \n";
	cin >> C;
	cout << "Введите команду N: \n";
	cin >> N;

	if (C == direction[0])
		x = 0;
	if (C == direction[1])
		x = 1;
	if (C == direction[2])
		x = 2;
	if (C == direction[3])
		x = 3;
	
	if ((x + N) % 4 >= 0)
		cout << direction[(x + N) % 4];
	else
		cout << direction[4 - (x + N) % 4];

	
	return 0;
}