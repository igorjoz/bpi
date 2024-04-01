#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    char tab[5][10] = {
        { 'a', 'b', 'c', 'd', 'f', 'g', 'i', 'k', 'j', 'l' },
        { 'c', 'f', 'C', 'f', 'i', 'e', 'i', 'k', 'Z', 'M' },
        { 'd', 'f', 'o', 'd', 'g', 'W', 'I', 'p', 'M', 'N' },
        { 'g', 't', 'O', 'R', 'p', 'W', 'l', 'D', 'S', 'E' },
        { 'h', 'r', 'm', 'Z', 'A', 'W', 'L', 'P', 'A', 'E' },
    };
    vector<pair<int, char>> deleted;

    for (int i = 0; i < 5; i++) {
        for (int j = 8; j > 0; j--) {
            if (i % j >= j / 2 and (j % (i + 1) == 1 or tab[i][j] == 'W')) {
                cout << tab[i][j] << "\t" << i + j << "\t" << i << "\t" << j << endl;
                deleted.push_back(make_pair(i + j, tab[i][j]));
                tab[i][j] = 0; 
            }
        }
    }
    cout << endl;

    sort(deleted.begin(), deleted.end());

    for (auto pair : deleted) {
        cout << pair.second << "\t" << pair.first << endl;
    }
}