#include <iostream>
#include <math.h>

using namespace std;

float pi = 0;

int main()
{
	pi = sqrt(12) * (1 - (1 / (pow(3, 2))) + (1 / (pow(3, 2) * 5)) - (1 / (pow(3, 3) * 7)) + (1 / (pow(3, 4) * 9)) - (1 / (pow(3, 5) * 11)));
	cout << pi;
}