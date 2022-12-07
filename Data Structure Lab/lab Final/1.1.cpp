#include <bits/stdc++.h>

using namespace std;

int arr[] = {1,2,3,4,5};

int main()
{
    
    cout<<"Please Insert two Number : "<<endl;

    int len = sizeof(arr)/sizeof(arr[0]);

    for(int i=len; i <len+2; ++i){
        cin>>arr[i];
    }

    cout<<"Afer Insertion array : ";

    for(int i=0; i < len+2; ++i){
        cout<<arr[i]<<" ";
    }

    return 0;
}