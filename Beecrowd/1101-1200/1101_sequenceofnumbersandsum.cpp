#include<iostream>
using namespace std;

int main(){
    int m=1, n=1, sum;
    while(1){
        sum=0;
        cin>>m>>n;
        if(m<=0||n<=0)
            break;
        m=m+n;
        n=max(m-n,n);
        m=m-n;
        for(int i=m; i<=n; i++){
            sum+=i;
            cout<<i<<" ";
        }
        cout<<"Sum="<<sum<<'\n';
    }


    return 0;
}


