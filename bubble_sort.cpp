#include<bits/stdc++.h>
using namespace std;
int main()
{ 
    int arr[]={13,46,24,52,20,9};
    int size = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<size;i++){
       int  min = i;
        for(int j = 0;j<size-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
            for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";

    }
    cout<<endl;
    }

}