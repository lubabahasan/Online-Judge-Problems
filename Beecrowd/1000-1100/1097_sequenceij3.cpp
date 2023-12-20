#include<iostream>
using namespace std;

int main(){
    int i=7, j=1, a=0;;
    while(j<10){
        for(int k=0; k<3; k++){
            cout<<"I="<<j<<" J="<<i+a<<'\n';
            i--;
        }
        i=7;
        j+=2;
        a+=2;
    }

    return 0;
}


