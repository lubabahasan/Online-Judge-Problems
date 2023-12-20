#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=2; i<10000; i++)
        if(i%t==2)
            cout<<i<<'\n';
}
