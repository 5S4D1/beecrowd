/*
    integer 'a' and 'b' are respectively the integers 'q' and 'r' such that 0 ≤ r < |b|
        ⁛ a = b × q + r
    In case you don't know it, the theorem that guarantees the existence and the uniqueness of the integers
    'q' and 'r' is known as ‘Euclidean Division Theorem’ or ‘Division Algorithm’.
    - quotient 'q' and remainder 'r'
*/
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;

    int q, r;
    if (a > 0)
    {
        q = a / b;
        r = a % b;
    }
    else
    {
        int d, c = b;
        if (b < 0)
            c *= -1;
        for (r = 0; r < c; r++)
        {
            d = a - r;
            if (d % b == 0)
                break;
        }
        q = d/b;
    }

    cout << q << " " << r << endl;

    return 0;
}