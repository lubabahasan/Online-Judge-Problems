#include<bits/stdc++.h>
using namespace std;
int main()
{
    double limak,bob;
    cin>>limak>>bob;
    cout<<int((log(bob/limak)/log(3.0/2.0))+1)<<endl;
    return 0;
}