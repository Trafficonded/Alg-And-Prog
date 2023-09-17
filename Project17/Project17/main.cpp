#include <iostream>

using namespace std;

long long int arr[1000] = {};
int columnCnt;
long long int columnH;
long long int waterBlock = 0;
long long int waterL;


int main()
{
    
    cin >> columnCnt;

    for (int i = 0; i < columnCnt; i++)
    {
        cin >> columnH;
        arr[i] = columnH;
    }
    for (int i = 1; i < columnCnt; i++)
    {
        waterL = 1;
        while(arr[i] == arr[i + waterL])
        {
            waterL += 1;
        }
        if (arr[i] < arr[i + waterL])
        {
            if (arr[i] < arr[i - 1])
            {
                if (arr[i - 1] > arr[i + waterL])
                    waterBlock = waterBlock + ((arr[i + waterL] - arr[i]) * waterL);
                else
                    waterBlock = waterBlock + ((arr[i - 1] - arr[i]) * waterL);
            }
            i = i + waterL - 1;
        }
    }
    cout << waterBlock;
}