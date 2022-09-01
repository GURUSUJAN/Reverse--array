#include <iostream>
using namespace std;
int main()
{
    int n,i,m;
    cin>>n;
    int ar[n];
    for(i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    cin>>m;
    for(i=0;i<m;i++)
    {
        cout<<ar[i]<<" ";
    }
    for(i=m;i<m+1;i++)
    {
        cout<<ar[i+1]<<" ";
    }
    for(i=m+1;i<=m+1;i++)
    {
        cout<<ar[i-1]<<" ";
    }
    for(i=m+2;i<n;i++)
    {
        cout<<ar[i]<<" ";
    }
}
