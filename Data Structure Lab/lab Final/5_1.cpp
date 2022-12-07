//Write down a C program, which can apply binary search to any character data whether the elements may be in the sorted or unsorted form (i.e. array will contain some "characters"s as data and they are in unsorted order). If unsorted then sort all the data in descending order.
#include <bits/stdc++.h>
using namespace std;

int binarySearch(string str,int len, char find){
    
    int left = 0;
    int right = len-1;
    while(left <= right){
        int mid = (left+right) / 2;
        if(str[mid] == find){
            return mid;
        }
        if(str[mid] > find){
            right = mid - 1;
        }
        else left = mid+1;
    }
    return -1;
}



int main()
{
    string str;
    cout<<"Input some carecters :"<<endl;
    getline(cin,str);

    int len = str.length();
    char ch;

    for (int i = 0; i < len-1; i++)
    {
        for (int j = i+1; j < len; j++)
        {
            if(str[i] < str[j]){
                ch = str[i];
                str[i] = str[j];
                str[j] = ch;
            }
        }
    }

    cout<<"Sort all data decending order : ";
    cout<<str<<endl;

    char find;
    cout<<"Please find charecter : "<<endl;
    cin>>find;

    int binary_search = binarySearch(str, len, find);

    if(binary_search > -1 ){
        cout<<"Find Charecter index : "<<binary_search<<" And find Charecter : "<<str[binary_search]<<endl;
    }
    else cout<<"Charecters does not exist"<<endl;
    
    
    

    return 0;
}