#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,a;
    cin>>t;
    while(t--)
    {
        int temp,c;
        cin>>n;
        int num[n];
        for(int i=0;i<n;i++)
        {
            cin>>num[i];
        }
        for(int i=1;i<n-1;i++)
        {
            if(num[i-1]!=num[i] && num[i]!=num[i+1])
            {
                cout<<i+1<<"\n";
                break;
            }
            else if(num[i-1]!=num[i] && num[i-1]!=num[i+1])
            {
                cout<<i<<"\n";
                break;
            }
            else if(num[i-1]!=num[i+1] && num[i]!=num[i+1])
            {
                cout<<i+2<<"\n";
                break;
            }
        }
    }

    return 0;
}