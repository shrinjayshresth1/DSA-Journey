#include <iostream>
using namespace std;
// Naive Approach
int maxDiff_NaiveApproach(int arr[], int n)
{
    int res = arr[1] - arr[0];
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            res = max(res, arr[j] - arr[i]);
        }
    }
    return res;  
}

int maxDiff_EfficientApproach
int main()
{
    int arr[] = {2, 3, 10, 6, 4, 8, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Maximum difference is " << maxDiff(arr, n);

    return 0;
}