#include<iostream>
using namespace std;

int main(){
    int m, n;
    while(1){
        cin>>m>>n;
        if(m==n)
            break;
        if(m<n)
            cout<<"Crescente\n";
        else
            cout<<"Decrescente\n";
    }

    return 0;
}


