#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string a;
    cin>>n>>a;
    int arr[26] = {0};
    int i=0;
    while(a[i]!='\0'){
        a[i] = toupper(a[i]);
        i++;
    }

    for(int i=0; i<n; i++){
        arr[int(a[i])-65]++;
    }

    for(int i=0; i<26; i++){
        if(!arr[i]){
            cout<<"NO\n";
            return 0;
        }
    }
    cout<<"YES\n";
    return 0;
}
