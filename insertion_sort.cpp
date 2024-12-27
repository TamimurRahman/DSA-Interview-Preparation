
//worst case time complexity O(n^2)
//Best case time complexity O(n)
#include<bits/stdc++.h>
using namespace std;
int main()
{ 
    int arr[]={14,9,15,12,6,8,13};
    int size = sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i < size; i++)
    {
        /* code */
        int j = i;
        while (j>0 && arr[j]<arr[j-1])
        {
            /* code */
            swap(arr[j],arr[j-1]);
            j--;
        }
        
    }
    for(int i =0;i<size;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
    
}