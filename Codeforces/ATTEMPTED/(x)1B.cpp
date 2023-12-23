//Lubaba Hasan UAP
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string a;
        cin>>a;
        int i=0,sum=0,colnum=0,mult = 0;
        string row, col = "";
        if(a[0]=='R' && (a[1]>='0' && a[1]<='9')){
            while(a[i]!='C'){
                i++;
            }
            row = a.substr(1,i-1);
            colnum = stoi(a.substr(i+1, a.length()));
            int x=to_string(colnum).length();
            while(colnum){
                if(colnum%26==0){
                    col+='Z';
                    colnum=(colnum/26)-1;
                }
                else {
                    if(colnum/26<=26){
                        col+=char((colnum%26)+64);
                        colnum=colnum/26;
                    } else {
                        while()
                    }
                }

            }

            reverse(col.begin(),col.end());
            cout<<col<<" ";
            cout<<row<<'\n';

        } else {
            while(a[i]>'9'){
                col+=a[i];
                i++;
            }
            row = a.substr(i,a.length());
            int rownum = stoi(row);
            int mult = 0;
            i--;
            while(i>=0){
                if(mult>0)
                    colnum+=(int(a[i])-64)*26;
                else
                    colnum+=(int(a[i])-64);
                mult++;
                i--;
            }

            cout<<"R"<<rownum<<"C"<<colnum<<'\n';
        }

    }
    return 0;
}



