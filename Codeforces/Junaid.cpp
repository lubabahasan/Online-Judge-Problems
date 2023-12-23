#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;

    while(cin >> t){
        int n;
        cin >> n;
        int arr[7];

        for(int i=0; i<7; i++){
            cin >> arr[i];
        }

        int read=0;

        while(read<n){
            for(int i=0; i<7; i++){
                read=read+arr[i];

                if(read>=n){
                    break;
                }

                if(i==6 && read<n){
                    i=-1;
                }
            }
        }

        cout << read << endl;
    }

}
