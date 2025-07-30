#include<bits/stdc++.h>
using namespace std;
#define nl '\n'

int main(){
    int n;
    string str;

    cin >> n >> str;

    int mid;
    int divs[n];
    int j = 0;
    for(int i=1; i<n+1; i++){
        if (n%i == 0){
            divs[j] = i;
            j++;
        }
    }


    for(int i=0; i<j; i++){
        if((divs[i]-1)%2==0){
            mid = (divs[i]-1)/2;
        } else {
            mid = 1 + ((divs[i]-1)/2);
        }
        for(int l=0, m=divs[i]-1; l<mid; l++, m--){
            swap(str[l], str[m]);
        }
    }

    cout << str << nl;

}