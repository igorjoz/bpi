// kompresja bezstratna

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str = "AAAAAAcccDDDTTTTWWWssssGGGTTTTTTTg";
    string compressed = "";
    int length = str.length();
    int counter = 1;
    char currentChar = str[0];

    for (int i = 1; i < length; i++) {
        if (str[i] == currentChar) counter++;
        else {
            if (counter == 1) {
                compressed += currentChar;
            }
            else {
                compressed += to_string(counter);
                compressed += currentChar;
            }

            currentChar = str[i];
            counter = 1;
        }
    }
    if (counter == 1) {
        compressed += currentChar;
    }
    else {
        compressed += to_string(counter);
        compressed += currentChar;
    }

    cout << compressed << endl;
}