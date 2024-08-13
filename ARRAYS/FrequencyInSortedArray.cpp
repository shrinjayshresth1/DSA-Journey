#include <iostream>
using namespace std;

void printFrequencies(int arr[], int n)
{
    int freq = 1, i = 1;
    while (i < n)
    {
        while (i < n && arr[i - 1] == arr[i])
        {
            freq++;
            i++;
        }
        cout << arr[i - 1] << " " << freq << endl;
        i++;
        freq = 1;
    }
    if (n == 1 || arr[n - 1] != arr[n - 2])
    {
        cout << arr[n - 1] << " " << 1 << endl;
    }
}

int main()
{
    int arr[] = {1,2,3};
    int n = sizeof(arr) / sizeof(arr[0]);
    printFrequencies(arr, n);
    return 0;
}