#include <iostream>
using namespace std;

// Function to calculate the total water trapped between bars
int getWater(int arr[], int n)
{
    int res = 0; // Initialize result variable to store total water trapped

    // Iterate through each bar in the array (excluding the first and last bars)
    for (int i = 1; i < n - 1; i++)
    {
        int left_max = arr[i]; // Initialize left_max to the current bar's height

        // Find the maximum height of bars to the left of the current bar
        for (int j = 0; j < i; j++)
        {
            left_max = max(left_max, arr[j]);
        }

        int right_max = arr[i]; // Initialize right_max to the current bar's height

        // Find the maximum height of bars to the right of the current bar
        for (int j = i + 1; j < n; j++)
        {
            right_max = max(right_max, arr[j]);
        }

        // Calculate the water trapped at the current bar and add it to the result
        res += min(left_max, right_max) - arr[i];
    }

    return res; // Return the total water trapped
}

int main()
{
    int arr[] = {3, 0, 1, 2, 5};          // Input array of bar heights
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate the number of bars

    int water = getWater(arr, n);                     // Calculate the total water trapped
    cout << "Total water trapped: " << water << endl; // Print the result

    return 0;
}