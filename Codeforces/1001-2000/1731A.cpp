#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        long long int arr[n],s=1;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n);
        for(int i=0;i<n;i++)
        {
            s*=arr[i];
        }
        s+=n-1;
        cout<<2022*s<<"\n";
    }
    return 0;
}