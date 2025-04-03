#include<iostream>
using namespace std;
int main(){
    int arr[5];
    int s=sizeof(arr)/sizeof(arr[0]);
    cout<<"length of array= "<<s<<"\n";
    cout<<"enter "<<s<<" values\n";
    for(int i=0;i<s;i++)
    {
        cin>>arr[i];
    }
    int largest=arr[0];
    for(int i=1;i<s;i++)
    {
        if(largest<arr[i])
        {
            largest=arr[i];
        }
    }
    cout<<"largest value= "<<largest;
}