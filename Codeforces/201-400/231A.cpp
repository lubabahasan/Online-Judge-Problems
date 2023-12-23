#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int sure[n][3],ts,out;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>sure[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        ts=0;
        for(int j=0;j<3;j++)
        {
            ts+=sure[i][j];
        }
        if(ts>=2) out++;
    }

    cout<<out<<endl;

    return 0;
}