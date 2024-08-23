#include <iostream>
using namespace std;

// Function to find the maximum profit that can be achieved by buying and selling stocks
int maxProfit(int price[], int start, int end)
{
    // Base case: If end is less than or equal to start, return 0
    if (end <= start)
    {
        return 0;
    }

    int profit = 0;

    // Iterate over the array from start to end
    for (int i = start; i < end; i++)
    {
        // Iterate from i+1 to end
        for (int j = i + 1; j <= end; j++)
        {
            // If price at j is greater than price at i, calculate the current profit
            if (price[j] > price[i])
            {
                int current_profit = price[j] - price[i] + maxProfit(price, start, i - 1) + maxProfit(price, j + 1, end);
                // Update the maximum profit
                profit = max(profit, current_profit);
            }
        }
    }

    // Return the maximum profit
    return profit;
}

int main()
{
    int price[] = {10,20,30};
    int n = sizeof(price) / sizeof(price[0]);

    // Call the maxProfit function
    int max_profit = maxProfit(price, 0, n - 1);

    // Print the maximum profit
    cout << "Maximum profit: " << max_profit << endl;

    return 0;
}