#include<bits/stdc++.h>
using namespace std;
int main()
{ 
    int arr[]={13,46,24,52,20,9};
    int size = sizeof(arr)/sizeof(arr[0]);
    
    for(int i = 0;i<size-1;i++){
        int min = i;
        for( int j =i;j<size;j++){
            if(arr[min]>arr[j]){
                min = j;
            }
        }

        //  int temp = arr[i];
        //  arr[i] = arr[min];
        //  arr[min]= temp;
        swap(arr[min],arr[i]);
    }
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}