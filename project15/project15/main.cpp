#include <iostream>

using namespace std;

char letter;
long int arr[26] = {};  //массив для занесения количества определенных символов с помощью привязки к ascii
char letters[26] = {};	//массив который нужен для выведения символов в правильной последовательности
long int var = 0;		//количество уникальных символов (до 26)
bool sw = true;			//для выхода из цикла после последнего символа
int transfer = 0;        

int main()
{	
	while (sw == true)
	{
		letter = cin.get();
		if (letter == '\n')
		{
			sw = false;                        //конец считывания символов
		}
		else 
		{
			arr[int(letter) - 65] += 1;           // если символы есть - добавляет 1 к количеству символа. Номер ячейки для отправки зависит от символа
			for (int i = 0; i < 26; i++)
			{
				if (letters[i] == letter)        
					i = 26;                     
				else if (i == 25 && letters[i] != letter)
				{
					letters[var] = letter;
					var += 1;                  //счетчик/отделитель уникальных символов от тех которые уже записаны
				}

			}
		}
		
	}
	for (int i = 0; i < var; i++)
	{
		transfer = int(letters[i]) - 65;
		if (arr[transfer] == 1)                                           //если символ 1 - выдает без коэф.,если 2 и более - с цифрой после
			cout << letters[i];
		else
			cout << letters[i] << arr[transfer];
	}
}