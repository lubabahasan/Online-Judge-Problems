#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin>>a;
    if(a[0]>96) a[0]=char(int(a[0])-32);
    cout<<a;
    return 0;
}