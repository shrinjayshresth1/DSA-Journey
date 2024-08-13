#include <iostream>
using namespace std;


void insertAtIndex(int arr[], int sizeOfArray, int index, int element)
{
    // Your code here
    if (sizeOfArray - 1 == index)
    {
        arr[sizeOfArray] = element;
    }
    else
    {
        for (int i = index + 1; i < sizeOfArray; i++)
        {
            arr[i + 1] = arr[i]; // shifting each element to its immediate successor index
        }
        arr[index] = element;
    }
}
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int element, index;
    cout << "Enter the index-";
    cin >> index;
    cout << "Enter the element-";
    cin >> element;
    insertAtIndex(arr, n, index, element);
    cout << "The Updated array is-\n";
    for (int i = 0; i < n+1; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
