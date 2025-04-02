#include<iostream>
using namespace std;
int main(){
    int arr[5];
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
        if(arr[i]%2==0)
        {
            cout<<arr[i]<<"\t";
        }
    }
}