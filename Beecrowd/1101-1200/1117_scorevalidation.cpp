#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    float score, avg;
    int flag=0;
    while(flag<2){
        cin>>score;
        if(score<0 || score>10)
            cout<<"nota invalida\n";
        else{
            avg+=score;
            flag++;
        }
    }
    cout<<"media = "<<fixed<<setprecision(2)<<avg/2.0<<'\n';


    return 0;
}


