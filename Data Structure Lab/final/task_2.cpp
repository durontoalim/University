#include <bits/stdc++.h>

using namespace std;

int arr[] = {1,2,3,4,5};

int binarySearch(int ar[],int len, int find){
    
    int left = 0;
    int right = len-1;

    while(left <= right){
        int mid = (left+right) / 2;
        if(ar[mid] == find){
            return mid;
        }
        if(ar[mid] > find){
            right = mid - 1;
        }
        else left = mid+1;
    }

    return -1;
}

int main()
{

    int find;
    int len = sizeof(arr)/sizeof(arr[0]);
    
    sort(arr,arr+len);

    cout<<"Please find element : ";
    cin>>find;
    int binary_search = binarySearch(arr,len,find);

    if(binary_search > -1){
        for(int i=binary_search; i < len-1 ; ++i){
            arr[i] = arr[i+1];
        }
        --len;
    }
    else{
        cout<<"Does not Exist find element .";
    }
    

    cout<<"Now Array Element with Delected Element : ";
    for (int i = 0; i < len; i++)
    {
        cout<<arr[i] << " ";
    }
    cout<<endl;
    
    return 0;
}