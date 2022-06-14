// five number 1 + 2 + 3 + 4 + 5
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    
    int sum=0,num;

    printf("Please 6 degit num : \n");

    cin>>str;

    for(int i=0; i < str.length(); i++){

        num = str[i]-48;

        sum += num;
    }

    cout<<str[0];

    for(int i=1; i< 6; i++){
        cout<<" + "<<str[i];
    }

    cout<<"\n"<<sum<<endl;

    return 0;
}