#include<iostream>
using namespace std;
int main()
{
    int i,n,key,count=0;
    cout<<"Enter a size:";
    cin>>n;
    int a[n];
    cout<<"Enter a elements of array:";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter key:";
    cin>>key;
    for(i=0;i<n;i++)
    {
        if(a[i]==key)
        {
             count++;
        }

    }
    if(count==0)
    {
        cout<<"Not found";
    }
    else
        cout<<"Found "<<count<<" times"<<endl;
}
