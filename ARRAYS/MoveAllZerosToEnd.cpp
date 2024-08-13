#include<iostream>
using namespace std;
void pushZerosToEnd(int arr[], int n) {
	    int count =0;
        //Count=No.of Non-zero values in the arrays
        for(int i=0;i<n;i++)
        {
            if (arr[i] != 0)
            {
                int temp=arr[i];
                arr[i]=arr[count];
                arr[count]=temp;
                count++;
            }
        }
	}
   