#include <bits/stdc++.h>

using namespace std;


void insertion(int arr[], int n, int x){

    int index;

    arr[n] = x;

    for (int i = 0; i < n+1; i++)
    {
        cout<<arr[i]<<" ";
    }


}


int main()
{
    int N;
    cin>>N;

    int arr[100];

    cout<<"Please input array element : ";

    for (int i = 0; i < N; i++)
    {
        cin>>arr[i];
    }

    cout<<"Please insert element input : ";

    int x;
    cin>>x;

    insertion(arr, N, x);

    

    return 0;
}