#include <iostream>
using namespace std;

// Function to calculate the maximum possible profit from a given array of stock prices
int maxProfit(int price[], int n)
{
    // Initialize the maximum profit to 0
    int profit = 0;

    // Iterate through the array of stock prices starting from the second day
    for (int i = 1; i < n; i++)
    {
        // If the price of the stock on the current day is greater than the previous day
        if (price[i] > price[i - 1])
        {
            // Add the difference to the total profit
            profit = profit + (price[i] - price[i - 1]);
        }
    }

    // Return the maximum possible profit
    return profit;
}

int main()
{
    // Array of stock prices
    int price[] = {1, 5, 4, 3, 8, 12};

    // Calculate the size of the array
    int n = sizeof(price) / sizeof(price[0]);

    // Call the maxProfit function to calculate the maximum possible profit
    int max_profit = maxProfit(price, n);

    // Print the maximum profit
    cout << "Maximum profit: " << max_profit << endl;

    return 0;
}