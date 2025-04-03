#include<iostream>
using namespace std;
int main(){
    int n,sum=0,i;
    cout<<"Enter limit of an array :";
    cin>>n;
    int a[n];
    cout<<"Enter values :\n";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    cout<<"Sum of values= "<<a[i];

}