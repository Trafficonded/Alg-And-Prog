#include <iostream>
#include <iomanip>
using namespace std;

long double a, b;

int main()
{
	cin >> a;
	cin >> b;
	cout << setprecision(16) << a / b;
}