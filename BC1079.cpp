#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        float a, b, c;
        cin >> a >> b >> c;
        
        a *= 2;
        b *= 3;
        c *= 5;

        cout << fixed << setprecision(1) << (a + b + c) / 10 << endl;
        /*
         * In the above line of code are same as
         *    printf("%.f \n",(a+b+c)/10);
         */
    }

    return 0;
}