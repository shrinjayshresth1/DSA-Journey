#include <iostream>
#include <vector>
using namespace std;

int maxConsecutive1(vector<int> &arr)
{
    int n = arr.size();
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        int curr = 0;
        for (int j = i; j < n; j++)
        {
            if (arr[j] == 1)
            {
                curr++;
            }
            else
            {
                break;
            }
            res = max(res, curr);
        }
    }
    return res;
}

int main()
{
    // Example binary vector arr
    vector<int> arr = {1, 1, 0, 1, 1, 1, 0, 1, 1, 0, 1};

    // Call the maxConsecutive1 function
    int maxConsecutiveOnes = maxConsecutive1(arr);

    // Print the result
    cout << "Maximum consecutive ones: " << maxConsecutiveOnes << endl;

    return 0;
}