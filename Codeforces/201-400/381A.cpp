//Lubaba Hasan UAP
#define nl '\n'
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin>>n;
    vector<int>cards;
    int c;
    for(int i=0; i<n; i++){
        cin>>c;
        cards.push_back(c);
    }

    int ser=0,dim=0;
    int f=cards.front(), b=cards.back();
    for(int j=0; j<n; j++){
        if(j%2==0){
            ser+=max(cards.front(),cards.back());
        } else
            dim+=max(cards.front(),cards.back());
        if(f<b){
            cards.pop_back();
        } else {
            cards.erase(cards.begin());
        }
        f=cards.front();
        b=cards.back();
    }
    cout<<ser<<" "<<dim<<nl;
}
