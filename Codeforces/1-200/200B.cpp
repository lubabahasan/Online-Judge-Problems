#include<bits/stdc++.h>
using namespace std;
int main()
{
    double t,s=0,o;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>o;
        double(s+=o/t);
    }
    cout<<fixed<<setprecision(12)<<s<<endl;
    return 0;
}