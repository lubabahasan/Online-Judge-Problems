#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){

        int score=0, point,c;
        string chk;

        for(int i=1; i<=5; i++){
            cin>>chk;
            for(int j=1; j<=10; j++){
                if(i==j)
                    point=i;
                if(i>j)
                    point=j;
                if(chk[j-1]=='X')
                    score+=point;
                if(11-j==point)
                    point--;
            }
        }


        for(int i=6; i<=10; i++){
            cin>>chk;
            c=0;
            for(int j=1; j<=10; j++){
                if(i+j==11 && c==0){
                    point=j;
                    c++;
                }
                if(i>j && c==0)
                    point=j;
                if(j>i)
                    point--;
                if(chk[j-1]=='X')
                    score+=point;
            }
            point++;
        }

        cout<<score<<'\n';
    }
    return 0;
}
