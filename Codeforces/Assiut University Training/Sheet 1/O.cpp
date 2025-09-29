#include<bits/stdc++.h>
using namespace std;
#define nl '\n'
#define cin(a) cin >> a
#define for(a,b,c) for(i=a; i<b; i+=c)
#define ll long long

ll a, b = 0, c, d, i = 0;
string s, t, u, v;

int main(){
    cin(s);

    int n = s.length();
    reverse(s.begin(), s.end());

    int nums[] = {0, 0};

    c = 1;

    for(0,n,1){
        if(s[i]>='0' && s[i]<='9'){
            nums[b] += (int(s[i])-int('0')) * c;
            c *= 10; 
        } else {
            v = s[i];
            b++;
            c = 1;
        }
    }

    if(v == "+") cout << nums[0]+nums[1] << nl;
    else if(v == "-") cout << nums[1]-nums[0] << nl;
    else if(v == "*") cout << nums[0]*nums[1] << nl;
    else cout << nums[1]/nums[0] << nl;
}