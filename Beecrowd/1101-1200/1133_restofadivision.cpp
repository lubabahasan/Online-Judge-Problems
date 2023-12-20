#include<bits/stdc++.h>
#define rep(i,a,b) for(int i=int(a); i<int(b); i++)
#define per(i,a,b) for(int i=int(b)-1; i>=int(a); i--)
#define nl '\n'

using namespace std;

int main()
{
    int x,y;
    cin>>x>>y;

    int temp = x+y;
    x = min(x, y);
    y = temp-x;

    for(int i=x+1; i<y; i++){
        int mo = i%5;
        if(mo==2 || mo==3){
            cout<<i<<nl;
        }
    }

}


