// You are given an array arr. The size of the array is given by sizeOfArray. You need to insert an element at the end//
// Array already have the sizeofarray -1 elements//
#include <iostream>
using namespace std;

void insertAtEnd(int arr[], int sizeOfArray, int element)
{
    
    arr[sizeOfArray-1] = element;
    sizeOfArray+=1;
}

int main()
{
    int element;
    int arr[5] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "The Orignal Array is-" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "\t";
    }
    cout<<endl;
    cout << "Enter the element to be inserted at last-";
    cin >> element;
    insertAtEnd(arr, n, element);
    cout << "The Updated array is-\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "\t";
    }
    return 0;
}
