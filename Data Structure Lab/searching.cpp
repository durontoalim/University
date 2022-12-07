#include <bits/stdc++.h>

using namespace std;


void searching(int arr[], int n, int x){

    int index, count = 0;

    for (int i = 0; i < n; i++)
    {
        if(arr[i] == x){
            index = i;
            count++;
            break;
        }
    }

    if(count == 0){
        cout<< "No search Data found"<<endl<<endl;
    }
    else{
        cout<<"Your searching Value match : "<<arr[index]<<endl;
    }


}


int main()
{
    int N;
    cin>>N;

    int arr[N];

    cout<<"Please input array element : ";

    for (int i = 0; i < N; i++)
    {
        cin>>arr[i];
    }

    cout<<"Please searching element input : ";

    int x;
    cin>>x;

    searching(arr, N, x);

    

    return 0;
}