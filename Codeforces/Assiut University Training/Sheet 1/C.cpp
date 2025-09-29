#include<bits/stdc++.h>
using namespace std;
#define nl '\n'

int main(){
    long long x, y;
    cin >> x >> y;

    string op[3] = {" + ", " * ", " - "};
    long long nums[3] = {x+y, x*y, x-y};

    for(int i=0; i<3; i++){
        cout << x << op[i] << y << " = " << nums[i] << nl;
    }
}