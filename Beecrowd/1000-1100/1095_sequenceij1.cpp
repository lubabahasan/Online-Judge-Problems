#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int i=-2;
    for(int j=60; j>=0; j-=5){
        i+=3;
        cout<<"I="<<i<<" J="<<j<<'\n';
    }
    return 0;
}


