#include <bits/stdc++.h>

using namespace std;

const int NN = 10;
int arr[NN]={1,3,4,6,8,4,3,2,3,6};



int binarySearch(int arr[],int len, int find){

    int left = 0;
    int right = len - 1;

    while (left <= right)
    {
        int mid = (left+right)/2;

        if(arr[mid] == find){
            return mid;
        }
        if(arr[mid] < find){
            left = mid+1;
        }
        else right = mid-1;
    }

    return -1;
    
}


int linearSearch(int arr[], int len, int find){

    for (int i = 0; i < len; i++)
    {
        if(arr[i] == find){
            return i;
        }
        
    }

    return -1;
    
}

int main()
{
    

    int len = sizeof(arr)/sizeof(arr[0]);
    int find;

    
    cout<<"insert your find element : "<<endl;
    cin>>find;

    int linear_search = linearSearch(arr,len,find);

     if(linear_search > -1){
        cout<<"Linear Search Exist ELement :"<<arr[linear_search]<<" index : "<<linear_search<<endl;
    }
    else cout<<"Linear Search Find element does not exist"<<endl;


    sort(arr,arr+len);

    
    int binary_search = binarySearch(arr,len,find);

    if(binary_search > -1){
        cout<<"Binary Search Exist ELement :"<<arr[binary_search]<<" index : "<<binary_search<<endl;
    }
    else cout<<"Binary Search Find element does not exist"<<endl;

   
    return 0;
}