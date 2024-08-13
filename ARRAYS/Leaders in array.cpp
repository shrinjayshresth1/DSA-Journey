#include <iostream>
using namespace std;
//Approach-1
void leaderInArray1(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        bool flag = false;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] <= arr[j])
            {
                flag = true;
                break;
            }
        }
        if (!flag)
        {
            cout << arr[i] << " "; // added space for readability
        }
    }
}

//Approach-2
void leaderInArray2(int arr[], int n){
    int currentLeader=arr[n-1];
    cout<<currentLeader<<" ";
    for (int i=n-2;i>=0;i--){
        if(arr[i]>currentLeader){
            currentLeader=arr[i];
            cout<<arr[i]<<" ";
        }
    }
}
int main() {
    int arr[] = {7,10,4,5,6,3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    leaderInArray2(arr, n); // removed unnecessary assignment to result
    cout << endl;          // added newline for readability
    return 0;
}