#include <iostream>

using namespace std;

// b¹belkowe sortowanie malej¹co
// O(n^2)
void bubbleSort(int* arr[]) {

}

int main()
{
    int nums[] = { 19, 4, 29, 724, 1000, 1, 3, 4, 290, 451, 13, 13, 55, -1 };
    int size = sizeof(nums) / sizeof(nums[0]);

    cout << "size: " << size << endl;

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (nums[i] > nums[j]) {
                nums[i] += nums[j];
                nums[j] = nums[i] - nums[j];
                nums[i] -= nums[j];
            }
        }
    }

    for (int num : nums) {
        cout << num << " ";
    }

    cout << endl << endl;

    {
        int a = 20;
        int b = 100;

        a += b;
        b = a - b;
        a -= b;

        cout << a << " " << b;
    }
}