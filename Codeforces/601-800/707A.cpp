#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin>>n>>m;
    char a;
    int flag = 0;
    for(int i=0; i<=n*m; i++){
        cin>>a;
        if(a!='B' && a!='W' && a!='G')
            flag=1;
    }
    if(!flag)
        cout<<"#Black&White\n";
    else
        cout<<"#Color\n";
}
