/*
Read a number X. Put this X at the first position of an array N [100]. In each subsequent position (1 up to 99) put half of the number inserted at the previous position, according to the example below. Print all the vector N.

Input
The input contains a double precision number with four decimal places.

Output
For each position of the array N print "N[i] = Y", where i is the array position and Y is the number stored in that position. Each number of N[...] must be printed with 4 digits after the decimal point.
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    double N[100];
    cin >> N[0];
    
    for (int i = 1; i < 100; i++) {
        N[i] = N[i - 1] / 2.0;
    }
    
    for (int i = 0; i < 100; i++) {
        cout << "N[" << i << "] = " << fixed << setprecision(4) << N[i] << endl;
    }
    
    return 0;
}