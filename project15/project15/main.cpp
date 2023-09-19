#include <iostream>

using namespace std;

char letter, letter2;
long int arr[10000] = {};
char letters[10000] = {};
long int var = 1;
long int inc = 1;
bool sw = true, sw2 = true;
int transfer = 0;

int main()
{
	while (sw == true)
	{
		letter = cin.get();
		if (letter == '\n')
		{
			arr[var] = inc;
			sw = false;
			letters[var] = letter2;
			var = var + 1;
			inc = 1;
			letter2 = letter;
		}
		else
		{
			if (sw2 == true)
			{
				sw2 = false;
				letter2 = letter;
			}
			else
			{
				if (letter == letter2)
				{
					inc += 1;
				}
				else
				{
					arr[var] = inc;
					letters[var] = letter2;
					var = var + 1;
					inc = 1;
					letter2 = letter;
				}

			}

		}

	}
	for (int i = 1; i < var; i++)
	{
		if (arr[i] == 1)
			cout << letters[i];
		else
			cout << letters[i] << arr[i];
	}
}