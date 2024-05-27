#include <iostream>
using namespace std;
int main()
{
    int read = 1;
    int highest, position;
    while (read < 101)
    {
        int temp;
        cin >> temp;
        if (read == 1)
        {
            highest = temp;
            position = read;
        }
        if (temp > highest)
        {
            highest = temp;
            position = read;
        }

        read++;
    }
    cout << highest << "\n"
         << position << endl;

    return 0;
}