#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str[1000];
    char temp;
    string wordSort[10000] = {};
    int wordSortCnt = 0;
    bool nextPack = true;


    for (int z = 0; nextPack == true; z++)
    {
       cin >> str[z];
       for (int k = 0; k < z && z != 0; k++)
       {
           if (str[z] == str[k])
           {
               wordSort[wordSortCnt] = str[z];
               wordSortCnt += 1;
           }
           
       }
       if (str[z] == "end")
       {
           if ((temp = cin.get()) != '\n')
           {
               free(str);

           }
           else
           {
               nextPack = false;
           }
           
       }

    }
    
    
}



