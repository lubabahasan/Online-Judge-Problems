#define nl '\n';
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int age;
    int sum=0;
    int cnt=0;

    while(1){
        cin>>age;
        if(age<0)
            break;
        sum+=age;
        cnt++;
        //cout<<sum<<cnt<<nl;
    }

    cout<<fixed<<setprecision(2)<<float(sum)/float(cnt)<<nl;

    return 0;
}

