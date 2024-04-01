#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	long double radius, height;
	cout << "Promien R (w kilometrach): ";
	cin >> radius;

	radius *= 1000;

	cout << "Wysokosc wzroku obserwatora h (w metrach): ";
	cin >> height;

	cout << endl << "Odleglosc horyzontu (widnokregu) to: ";
	cout << (long double)(sqrt(2 * radius * height + height * height) / 1000) << " kilometrow" << endl;
}