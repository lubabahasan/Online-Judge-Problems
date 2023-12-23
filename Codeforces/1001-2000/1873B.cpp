#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int n;
    while(t--){
        int prod=1, mn=9, c=0;
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++){
            cin>>a[i];
            if(a[i]<mn)
                mn=a[i];
        }
        for(int i=0; i<n; i++){
            if(a[i]==mn && c==0){
                a[i]++;
                c++;
            }
            prod*=a[i];
        }

        cout<<prod<<'\n';
    }
    return 0;
}
