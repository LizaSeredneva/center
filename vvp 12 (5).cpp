#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	setlocale(0, "");
	int N;
	string x;
	string colour[10] = { "год зелён", "год зелён", "год красн", "год красн", "год жёлт", "год жёлт", "год бел", "год бел", "год чёрн", "год чёрн" };
	string animal[12] = { " крысы", " коровы", " тигра", " зайца", " дракона", " змеи", " лошади", " овцы", " обезьяны", " курицы",  " собаки",  " свиньи" };

	cout << "Введите год: ";
	cin >> N;

	if (N - 1984 >= 0)
	{
		if (((N - 1984) % 12 >= 2) and ((N - 1984) % 12 <= 4))
			x = colour[(N - 1984) % 10] + "ого" + animal[(N - 1984) % 12];
		else
			x = colour[(N - 1984) % 10] + "ой" + animal[(N - 1984) % 12];
	}
	else
	{
		if ((12 - abs(N - 1984) % 12 >= 2) and (12 - abs(N - 1984) % 12 <= 4))
			x = colour[10 - abs(N - 1984) % 10] + "ого" + animal[12 - abs(N - 1984) % 12];
		else
			x = colour[10 - abs(N - 1984) % 10] + "ой" + animal[12 - abs(N - 1984) % 12];
	}

	cout << x;

	return 0;
}