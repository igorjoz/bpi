#include <iostream>

using namespace std;

int main()
{
    int const lines = 10;
    int const cols = 10;

    int nums[lines][cols];

    for (int i = 0; i < lines; i++) {
        for (int j = 0; j < cols; j++) {
            if (j % 2 == 0) nums[i][j] = i;
            else nums[i][j] = 9 - i;
        }
    }

    for (int i = 0; i < lines;i++) {
        for (int j = 0; j < cols; j++) {
            cout << nums[i][j] << " ";
        }
        cout << endl;
    }
}