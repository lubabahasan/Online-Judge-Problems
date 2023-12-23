//Lubaba 22201134
using namespace std;

#include<bits/stdc++.h>

int main()
{
    int t, n, m, count;
    cin>>t;
    char vika[4] = {'v','i','k','a'};
    while(t--){
        count=0;
        cin>>n>>m;

        char carpet[n][m];
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cin>>carpet[i][j];
            }
        }

        if(m>3){
            for(int j=0; j<m; j++){
                if(count==4) break;
                for(int i=0; i<n; i++){
                    //cout<<i<<j<<" "<<carpet[i][j]<<" "<<vika[count]<<" "<<count<<'\n';
                    if(carpet[i][j]==vika[count]){
                            count++;
                            break;
                    }
                }
            }
            if(count==4)
                cout<<"YES\n";
            else
                cout<<"NO\n";

        } else
            cout<<"NO\n";
    }
    return 0;
}
