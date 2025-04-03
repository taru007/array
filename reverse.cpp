#include<iostream>
using namespace std;
    int main(){
    int n;
    cout<<"Enter length of an array :";
    cin>>n;
    int a[n];
    cout<<"Enter array :\n";
    for( int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Reverse array : ";
    for(int i=n-1;i>=0;i--)
    {
        cout<<a[i]<<" ";
    }
}