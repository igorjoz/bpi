#include <iostream>

using namespace std;

int main()
{
	int const numsQuantity = 11;
	int nums[numsQuantity + 1] = { 92, 79, 68, 78, 73, 82, 86, 79, 92, 73, 92, 0 };
	unsigned int hash = 1;

	for (int i = 0; i < numsQuantity; i++) {
		hash *= nums[i];
		cout << hash << "\t";
		hash /= 12;
		cout << hash << "\t" << nums[i] << endl;
	}
}