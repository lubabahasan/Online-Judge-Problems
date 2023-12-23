#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    string og="abc", input,s1,s2,s3;
    while(t--){
        cin>>input;
        if(input=="bca" || input=="cab")
            cout<<"NO"<<'\n';
        else
            cout<<"YES"<<'\n';
    }
    return 0;
}