#include <iostream>
#include <climits>
using namespace std;

int maxSumNaive(int arr[], int n, int k)
{
    int res = INT_MIN;
    for (int i = 0; i + k - 1 < n; i++)
    {
        int curr = 0;
        for (int j = 0; j < k; j++)
        {
            curr += arr[i + j];
        }
        res = max(res, curr);
    }
    return res;
}

int maxSumUsingWindowSliding(int arr[], int n, int k)
{
    int window_sum = 0;
    for (int i = 0; i < k; i++)
    {
        window_sum += arr[i];
    }
    int max_sum = window_sum;

    for (int j = k; j < n; j++)
    {
        window_sum = window_sum + arr[j] - arr[j - k];
        max_sum = max(max_sum, window_sum);
    }
    return max_sum;
}

int main()
{
    int arr[] = {1, 4, 2, 10, 23, 3, 1, 0, 20};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 4;

    cout << "Array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Window size (k): " << k << endl;

    int result = maxSumUsingWindowSliding(arr, n, k);
    cout << "Maximum sum of " << k << " consecutive elements: " << result << endl;

    return 0;
}