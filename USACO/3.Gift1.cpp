/*
ID: Lubaba Hasan [iqras431]
TASK: ride
LANG: C++                 
*/
#include<iostream>
using namespace std;
int main()
{
    freopen("gift1.in","r",stdin);
    freopen("gift1.out","w",stdout);
    int np;
    cin>>np;
    int money[np],moni,num;
    string name[np],nem;
    for(int i=0;i<np;i++)
    {
        cin>>name[i];
    }
    for(int i=0;i<np;i++)
    {
        cin>>nem;
        cin>>money[i]>>num;
        for(int j=0;j<np;j++)
        {
            if(nem==name[j])
            {
                money[i]=;
            }
        }
        
    }
    
    return 0;
}