// Given an unsorted array arr[] of size N. Rotate the array to the left (counter-clockwise direction) by d steps, where D is a positive integer.

// Note: It's an in-place rotation. The output should be as if the array is rotated to the left by D elements in a single operation.
#include <iostream>
using namespace std;
void reverse(int nums[], int low, int high)
{
    while (low < high)
    {
        nums[low] = nums[low] ^ nums[high];
        nums[high] = nums[low] ^ nums[high];
        nums[low] = nums[low] ^ nums[high];

        low++;
        high--;
    }
}

void rotate(int *nums, int numsSize, int k)
{
    reverse(nums, 0, numsSize - 1); // Reverse the entire array
    reverse(nums, 0, k - 1);        // Reverse the first k elements
    reverse(nums, k, numsSize - 1); // Reverse the remaining (numsSize - k) elements
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;

    rotate(arr, n, k);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
