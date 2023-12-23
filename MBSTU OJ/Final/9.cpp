#include<iostream>
//22201134 Lubaba Hasan

using namespace std;

int main(){
    short int t;
    cin>>t;
    while(t--){
        short int x,y,r,c;
        cin>>x>>y>>r>>c;
        if(abs(r-x)==abs(c-y) || r==x || c==y)
                cout<<"Attack";
        else
            cout<<"Peace";
        cout<<'\n';
    }
    return 0;
}
