#include <iostream>
#include <string>
using namespace std;

// ������� ��� �������������� ��������� ����� � ������� Excel
string getColumnName(int n)
{
    // �������������� �������� ������ ��� ������
    string result = "";

    while (n > 0)
    {
        // ����� ������ ��������� ����� � ��������� �����
        // � �������

        // ����� ������ 0 ������������� 'A', � 25 ������������� 'Z'
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