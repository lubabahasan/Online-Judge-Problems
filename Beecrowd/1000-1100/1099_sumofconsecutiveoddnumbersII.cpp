#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int n;
    cin>>n;
    while(n--){
        int x, y, sum=0;
        cin>>x>>y;
        x=x+y;
        y=max(x-y,y);
        x=x-y;
        for(int m=x+1; m<y; m++)
            if(m%2!=0)
                sum+=m;
        cout<<sum<<'\n';
    }


    return 0;
}


