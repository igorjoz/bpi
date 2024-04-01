#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    short bpi = 0x8A03;
    bpi ^= ~0x30A8 ^ 0x727, 2;

    cout << bpi << endl;
    cout << ~bpi << endl;
    //cout << abs(~bpi) > abs(bpi);
}