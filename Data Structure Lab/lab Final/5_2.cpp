//Write down a C program to Sort all the data in Descending Order

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int len;
    cout<<"Input Your Data length : "<<endl;
    cin>>len;
    int arr[len];
    cout<<"Input Your Data :"<<endl;
    for (int i = 0; i < len; i++)
    {
        cin>>arr[i];
    }


    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < len-i-1; j++)
        {
            if(arr[j] < arr[j+1]){
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
        }
    }

    cout<<"Sort all data decending order : ";

    for (int i = 0; i < len; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    

    return 0;
}