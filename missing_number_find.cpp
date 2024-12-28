#include<bits/stdc++.h>
using namespace std;
int main()
{ 
    int arr[]={3,0,1};
    int size = sizeof(arr)/sizeof(arr[0]);
    int sumof = (size*(size+1))/2;
    int temp = 0;
    for (int i = 0; i < size; i++)
    {
        /* code */
        temp = temp+arr[i];
    }
    cout<<abs(sumof-temp)<<endl;
    
}