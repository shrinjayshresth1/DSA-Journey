
#include <iostream>
#include <vector>
#include <climits>
using namespace std;
 //Better
int longestSubarraySum(vector<int> arr, long long K) {
    int n = arr.size();
    int len = 0;
    for (int i = 0; i < n; i++) {
        long long sum = 0;
        for (int j = i; j < n; j++) {
            sum += arr[j];
            if (sum == K) {
                len = max(len, j - i + 1);
            }
        }
    }
    return len;
}

int main() {
    vector<int> arr = {1, 4, 20, 3, 10};
    long long K = 25;
     
    cout << "Length of the longest subarray with sum " << K << " is: " << longestSubarraySum(arr, K);
    return 0;
}
 