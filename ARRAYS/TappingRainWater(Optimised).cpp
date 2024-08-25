#include <iostream>
#include <vector>

using namespace std;

// Function to calculate the total water trapped between bars
int trap(vector<int> &height)
{
    // Get the size of the input vector
    int n = height.size();

    // Handle edge case where height is empty
    if (n == 0)
        return 0;

    // Initialize result variable to store total water trapped
    int res = 0;

    // Create vectors to store the maximum height of bars to the left and right of each bar
    vector<int> lmax(n), rmax(n);

    // Initialize the first element of lmax to the height of the first bar
    lmax[0] = height[0];

    // Calculate the maximum height of bars to the left of each bar
    for (int i = 1; i < n; i++)
    {
        // Update lmax[i] to be the maximum of the current bar's height and the previous bar's lmax
        lmax[i] = max(height[i], lmax[i - 1]);
    }

    // Initialize the last element of rmax to the height of the last bar
    rmax[n - 1] = height[n - 1];

    // Calculate the maximum height of bars to the right of each bar
    for (int i = n - 2; i >= 0; i--)
    {
        // Update rmax[i] to be the maximum of the current bar's height and the next bar's rmax
        rmax[i] = max(height[i], rmax[i + 1]);
    }

    // Calculate the water trapped at each bar and add it to the result
    for (int i = 1; i < n - 1; i++)
    {
        // Calculate the water trapped at the current bar as the minimum of the left and right max heights minus the current bar's height
        res += min(lmax[i], rmax[i]) - height[i];
    }

    // Return the total water trapped
    return res;
}

int main()
{
    // Example input vector of bar heights
    vector<int> height = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};

    // Calculate the total water trapped
    int waterTrapped = trap(height);

    // Print the result
    cout << "Water trapped: " << waterTrapped << endl;

    return 0;
}