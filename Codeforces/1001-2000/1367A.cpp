//Lubaba Hasan UAP
#define nl '\n'
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--){
        string a; cin>>a;
        //string arr[2+((a.length()-2)/2)];
        vector<char>vec;

        vec.push_back(a[0]);
        for(int i=1; i<a.length()-1; i+=2){
            vec.push_back(a[i]);
        }
        vec.push_back(a[a.length()-1]);

        string b="";
        for(auto i=vec.begin(); i!=vec.end(); i++)
            b+=*i;

        cout<<b<<nl;
    }
    return 0;
}
