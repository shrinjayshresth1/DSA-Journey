//Given an unsorted array arr[] of size N. Rotate the array to the left (counter-clockwise direction) by 1 steps, where D is a positive integer. 

 //Note: It's an in-place rotation. The output should be as if the array is rotated to the left by D elements in a single operation.

 #include<iostream>
 using namespace std;

 void rotateArr(int arr[], int n){
    int temp=arr[0];
    for(int i=1;i<n;i++)
    {
        arr[i-1]=arr[i];
    }
    arr[n-1]=temp;
 }
 int main()
 {
    int arr[6]={1,2,3,4,5,6};
    rotateArr(arr,6);
    for(int i=0;i<6;i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;

 }