#include <iostream>
#include <cmath>

using namespace std;

long int a, b, c;

int main()
{
	cin >> a;
	cin >> b;
	cin >> c;
	if (abs(a - b) < abs(a - c))
		cout << "B " << abs(a - b);
	else
		cout << "C " << abs(a - c);
}