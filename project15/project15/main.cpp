#include <iostream>

using namespace std;

char letter;
long int arr[26] = {};
char letters[26] = {};
long int var = 0;
bool sw = true;
int transfer = 0;

int main()
{	
	while (sw == true)
	{
		letter = cin.get();
		if (letter == '\n')
		{
			sw = false;
		}
		else 
		{
			arr[int(letter) - 65] += 1;
			for (int i = 0; i < 26; i++)
			{
				if (letters[i] == letter)
					i = 26;
				else if (i == 25 && letters[i] != letter)
				{
					letters[var] = letter;
					var += 1;
				}

			}
		}
		
	}
	for (int i = 0; i < var; i++)
	{
		transfer = int(letters[i]) - 65;
		if (arr[transfer] == 1)
			cout << letters[i];
		else
			cout << letters[i] << arr[transfer];
	}
}