#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter length of an array :";
    cin>>n;
    int a[n];
    cout<<"Enter values :\n";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    cout<<"Ascending order of an array :";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}