#include <iostream>
#include <string>
using namespace std;

// Функция для преобразования заданного числа в столбец Excel
string getColumnName(int n)
{
    // инициализируем выходную строку как пустую
    string result = "";

    while (n > 0)
    {
        // найти индекс следующей буквы и соединить букву
        // к решению

        // здесь индекс 0 соответствует 'A', а 25 соответствует 'Z'
        int index = (n - 1) % 26;
        result = char(index + 'A') + result;
        n = (n - 1) / 26;
    }

    return result;
}

long long int num = 0;

int main()
{
    std::cin >> num;
       std::cout << getColumnName(num);

}