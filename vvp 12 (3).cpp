#include <iostream>
using namespace std;

int main()
{
	setlocale(0, "");
	int N;
	string x;
	string number[31] = {"десять", "одиннадцать", "двенадцать", "тринадцать", "четырнадцать", "пятнадцать", "шестнадцать", "семнадцать", "восемнадцать", "девятнадцать", "двадцать",
                       "двадцать одно", "двадцать два", "двадцать три", "двадцать четыре", "двадцать пять", "двадцать шесть", "двадцать семь", "двадцать восемь", "двадцать девять",
                       "тридцать", "тридцать одно", "тридцать два", "тридцать три", "тридцать четыре", "тридцать пять", "тридцать шесть", "тридцать семь", "тридцать восемь", 
                       "тридцать девять", "сорок"};

	cout << "Введите количество заданий: ";
	cin >> N;

	x = number[N - 10] + " учебных заданий";

	if ((N > 21 and N < 25) or (N > 31 and N < 35))
		x = number[N - 10] + " учебных задания";
	if ((N == 21) or (N == 31))
		x = number[N - 10] + " учебное задание";

	cout << x;

	return 0;
}