#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    float i=0, a=0;
    for(int m=0; m<11; m++){
        for(int k=1; k<=3; k++){
            cout<<setprecision(2)<<"I="<<i<<" J="<<k+a<<'\n';
        }
        a+=0.2;
        i+=0.2;
    }

    return 0;
}


