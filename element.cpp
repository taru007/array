#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter limit of an array :";
    cin>>n;
    int a[n];
    cout<<"enter values :\n";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int target,p=0;
    cout<<"enter target value :";
    cin>>target;
    for(int i=0;i<n;i++)
    {
        if(a[i]==target)
        {
            p=1;
        }
    }
    if(p==0)
    {
        cout<<"no";
    }
    else
    {
        cout<<"yes";
    }
}
//reverse array
//sort the array in ascending order
//descending order