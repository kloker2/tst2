#include "pch.h"
#include <cmath>
#include <iostream>
using namespace std;
int i, j, k;
bool is_square(const int n)
{
	const int sqrt_n = std::sqrt(n);
	if (n > 2)
		for (i = 1; i < sqrt_n; i++)
			for (j = 1; j < sqrt_n; j++)
				for (k = 1; k < sqrt_n; k++)
					if ((i * i + j * j + k * k) == n)
					{
						cout << "n=" << n << "=" << i << "*" << i << "+" << j << "*" << j << "+" << k << "*" << k << "\n";
						return true;
					}

	return false;
}
int main()
{
	int n = 0;
	//using namespace std;
	cout << "n = ";
	cin >> n;
	//	const int n = 22;

	bool t = is_square(n);

	cout << boolalpha << t << endl;
	system("pause");
	return 0;
}
