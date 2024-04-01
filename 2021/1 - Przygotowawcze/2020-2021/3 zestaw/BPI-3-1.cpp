#include <iostream>
#include <math.h>

using namespace std;

long double PI = 3.14159265359;

int main()
{
    int radius1;
    long double surface;

    cin >> radius1;

    surface = (long double)(PI * (radius1 * radius1));

    cout << surface << endl;
    cout << "half: " << surface / 2;
}