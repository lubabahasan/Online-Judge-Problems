#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a = "";
    char c;
    int i=0;
    do{
        cin>>c;
        a+=c;
    } while(c!='}');
    a = a.substr(1,a.length()-2);

    int arr[26] = {0};

    for(int i=0; i<a.length(); i+=2){
        arr[int(a[i])-97]++;
    }

    int cnt=0;
    for(int i=0; i<26; i++){
        if(!arr[i]){
            cnt++;
        }
    }

    cout<<26-cnt<<'\n';
    return 0;
}
