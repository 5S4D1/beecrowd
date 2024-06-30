/*
    This scenario is so interesting; those who watched Game of Thrones can relate to it.
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int sum = 0;
    string crow;
    while (getline(cin, crow))
    {
        if (crow == "caw caw")
        {
            cout << sum << endl;
            sum = 0;
        }
        else
        {
            if (crow == "---")
                sum += 0;
            if (crow == "--*")
                sum += 1;
            if (crow == "-*-")
                sum += 2;
            if (crow == "-**")
                sum += 3;
            if (crow == "*--")
                sum += 4;
            if (crow == "*-*")
                sum += 5;
            if (crow == "**-")
                sum += 6;
            if (crow == "***")
                sum += 7;
        }
    }

    return 0;
}