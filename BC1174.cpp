#include <iostream>
using namespace std;

int main()
{
    float array[100];
    for (int i = 0; i < 100; i++)
    {
        cin >> array[i];
    }

    for (int i = 0; i < 100; i++)
    {
        if (array[i] <= 10)
        {
            printf("A[%d] = %.1f\n", i, array[i]);
        }
    }

    return 0;
}