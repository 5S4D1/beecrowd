#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    string number;
    getline(cin, number);
    int len = 0;
    while (len < number.length())
    {
        if (number[len] == '1' && number[len + 1] == '3')
        {
            cout << number << " es de Mala Suerte" << endl;
            return 0;
        }
        len++;
    }
    cout << number << " NO es de Mala Suerte" << endl;

    return 0;
}