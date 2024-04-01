#include <iostream>

using namespace std;

int main()
{
	int a[27];

	for (int i = 0; i < 3; i++) {
		for (int j = 2; j >= 0; j--) {
			for (int k = 2; k >= 0; k--) {
				*(a + (i * 9 + j * 3 + k)) = i * 5 + j * 7 + k + 2;
			}
		}
	}

	cout << "a = " << *(a + 5) + *(a + 23) * *(a + 11) / 5.0 + *a << endl;
	cout << "b = " << *(a + 7) + *(a + 13) * *(a + 21) / 13 + *a << endl;
	cout << "c = " << *(a + 21) + *(a + 11) * (*(a + 9) + 12) << endl;
}