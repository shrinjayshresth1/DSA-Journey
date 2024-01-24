//Given a sorted array arr[] of size N, the task is to remove the duplicate elements from the array and return the number of distinct elements.
#include<iostream>
using namespace std;

int removeDuplicate(int arr[],int size)
{
    int res=1;
    for(int i=1;i<size;i++)
    {
        if(arr[i]!=arr[res-1])
        {
            arr[res]=arr[i];
            res++;
        }
    }
    return res;
}
int main()
{
    int arr[8]={1,1,2,3,4,5,6,6};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<removeDuplicate(arr,size)<<endl;
    return 0;
}