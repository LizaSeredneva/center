#include <iostream>
using namespace std;

float Fact2(int N) {
	float res; int k = 0;
	if (N % 2 == 0) res = 2;
	else res = 1;
	k = res + 2;
	while (k != N) {
		res *= k;
		k += 2;
	}
	return res;
}

int main()
{
	setlocale(0, "");
	return 0;
}