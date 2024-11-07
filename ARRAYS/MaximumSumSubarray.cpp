#include <iostream>
#include <algorithm> // for std::max

// Function to find the maximum sum subarray
int maximumSumSubarray(int arr[], int n)
{
    int res = arr[0];
    int maxEnding = arr[0];
    for (int i = 1; i < n; i++) // Start from index 1
    {
        maxEnding = std::max(maxEnding + arr[i], arr[i]);
        res = std::max(res, maxEnding);
    }
    return res;
}

int main()
{
    int arr[] = {-3, -8, -2, 4, -5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    int maxSum = maximumSumSubarray(arr, n);

    std::cout << "The maximum sum of a subarray is: " << maxSum << std::endl;

    return 0;
}
