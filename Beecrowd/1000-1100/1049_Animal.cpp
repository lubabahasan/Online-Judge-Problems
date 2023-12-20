#include<iostream>
using namespace std;

int main()
{
    string s1,s2,s3;
    cin>>s1>>s2>>s3;
    if(s1=="vertebrado"){
        if(s2=="ave"){
            if(s3=="carnivoro")
                cout<<"aguia\n";
            else
                cout<<"pomba\n";
            }
        else {
            if(s3=="onivoro")
                cout<<"homem\n";
            else
                cout<<"vaca\n";
        }
    }
    else{
        if(s2=="inseto"){
            if(s3=="hematofago")
                cout<<"pulga\n";
            else
                cout<<"lagarta\n";
            }
        else {
            if(s3=="hematofago")
                cout<<"sanguessuga\n";
            else
                cout<<"minhoca\n";
        }
    }

    return 0;
}
