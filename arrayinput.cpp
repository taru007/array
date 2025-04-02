#include<iostream>
using namespace std;
int main(){
    int arr[10];
    int s=sizeof(arr)/sizeof(arr[0]);
    cout<<"length of array="<<s<<"\n";
    cout<<"enter "<<s<<" values\n";
    for(int i=0;i<s;i++)
    {
        cin>>arr[i];
    }
    cout<<"\nstored data are\n";
    for(int i=0;i<s;i++)
    {
        cout<<arr[i]<<"\t";
    }
}