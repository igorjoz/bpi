#include <iostream>

using namespace std;

int main()
{
	char tab[5][5];

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			if (i == j) tab[i][j] = 'X';
			else if (i == 1 || j == 1) tab[i][j] = 'O';
			else if (i == 2 || j == 2) tab[i][j] = '-';
			else if (i == 3 || j == 3) tab[i][j] = '=';
			else if (i == 4 || j == 4) tab[i][j] = '/';
			else tab[i][j] = '|';
		}
	}

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			cout << tab[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}