//Given an array, arr
#include<iostream>
using namespace std;
int main() {
    int arr[5]={1,2,3,4,5};
    cout<<"The Orignal Array-"<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<"\t";
    }
    int low=0;
    int high=(sizeof(arr)/sizeof(arr[0]))-1;
    while(low<high){
       int temp=arr[low];
       arr[low]=arr[high];
       arr[high]=temp;
       low++;
       high--;
    }
    cout<<"The Reversed array is:-"<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<"\t";
    }
    return 0;
}
