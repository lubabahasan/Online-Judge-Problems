#include<iostream>
using namespace std;

int main(){
    int i=1;
    int num, mx=-1, pos;
    while(i<101){
        cin>>num;
        if(num>mx){
            mx=num;
            pos=i;
        }
        i++;
    }
    cout<<mx<<'\n'<<pos<<'\n';
}

