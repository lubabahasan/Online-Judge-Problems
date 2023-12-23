#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long int n, k, x, a;
        cin>>n>>k>>x;
        a = ceil((x/float(k))-((1+k)/2.0));
        cout<<"sum= "<<a<<'\n';
    }
    return 0;
}
