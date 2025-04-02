#include<iostream>
using namespace std;
int main(){
    int arr[10]={1,2,5};
    int s=sizeof(arr)/sizeof(arr[0]);
    cout<<"length of array="<<s<<"\n";
    for(int i=0;i<s;i++)
    {
        cout<<arr[i]<<"\t";
    }
}