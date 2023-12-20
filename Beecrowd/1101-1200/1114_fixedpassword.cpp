#include<iostream>
using namespace std;

int main(){
    int pass;
    while(1){
        cin>>pass;
        if(pass==2002){
            cout<<"Acesso Permitido\n";
            break;
        }
        else
            cout<<"Senha Invalida\n";
    }

    return 0;
}


