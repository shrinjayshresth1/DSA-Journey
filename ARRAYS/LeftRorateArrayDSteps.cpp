// Given an unsorted array arr[] of size N. Rotate the array to the left (counter-clockwise direction) by d steps, where D is a positive integer.

// Note: It's an in-place rotation. The output should be as if the array is rotated to the left by D elements in a single operation.
#include <iostream>
using namespace std;
void rotateArrD(int arr[], int d, int n)
{
    int count = d;
    while (count > 0)
    {
        int temp = arr[0];
        for (int i = 1; i < n; i++)
        {
            arr[i - 1] = arr[i];
        }
        arr[n - 1] = temp;
        count--;
    }
}
int main()
{
    int arr[6] = {1, 2, 3, 4, 5, 6};
    rotateArrD(arr, 2, 6);
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}