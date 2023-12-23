#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,c=1;
    cin>>a;
    a++;
    while(c) {
        string x=to_string(a);
        if((x[0]==x[1] || x[0]==x[2] || x[0]==x[3]) || (x[1]==x[0] || x[1]==x[2] || x[1]==x[3]) || (x[0]==x[2] || x[1]==x[2] || x[2]==x[3]) || (x[0]==x[3] || x[3]==x[2] || x[1]==x[3]))
        {
            a++;
        } else c=0;
    }
    cout<<a<<"\n";
    return 0;
}