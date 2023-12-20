#include<bits/stdc++.h>
#define rep(i,a,b) for(int i=int(a); i<int(b); i++)
#define per(i,a,b) for(int i=int(b)-1; i>=int(a); i--)
#define nl '\n'

int inter=0;
int gremio=0;
int draw=0;
int c=0;

using namespace std;

void goal(int a, int b){
    if(a>b)
        inter++;
    else if(b>a)
        gremio++;
    else
        draw++;
    c++;
}

int main()
{
    int a, b;
    cin>>a>>b;
    goal(a,b);

    int choice;

    while(1){
        cout<<"Novo grenal (1-sim 2-nao)\n";
        cin>>choice;
        switch(choice){
            case 1:
                cin>>a>>b;
                goal(a,b);
                break;
            case 2:
                cout<<c<<" grenais\n";
                cout<<"Inter:"<<inter<<'\n';
                cout<<"Gremio:"<<gremio<<nl;
                cout<<"Empates:"<<draw<<nl;
                if(inter>gremio)
                    cout<<"Inter venceu mais\n";
                else if(gremio>inter)
                    cout<<"Gremio venceu mais\n";
                else
                    cout<<"Não houve vencedor\n";
                return 0;
        }

    }

}
