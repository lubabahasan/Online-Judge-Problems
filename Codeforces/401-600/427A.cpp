#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int eve[n];
    for(int i=0; i<n; i++){
        cin>>eve[i];
    }

    int off=0,crm=0,unres=0,j;

    for(int i=0; i<n; i++){
        if(eve[i]<0){
            j=i;
            while(eve[j]<0){
                crm++;
                j++;
            }
            if(off-crm<0){
                unres+=abs(off-crm);
                off=0;
            }
            else
                off-=crm;
            crm=0;
            i=j-1;
        } else {
            off+=eve[i];
        }
    }
    cout<<unres<<'\n';
}
