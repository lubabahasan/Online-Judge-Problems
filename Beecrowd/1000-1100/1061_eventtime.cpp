#include<iostream>
using namespace std;

int main(){
    long int day, hour, minute, sec, startT, endT;
    string a;
    char b;

    cin>>a>>day>>hour>>b>>minute>>b>>sec;
    startT = day*86400+hour*3600+minute*60+sec;
    cin>>a>>day>>hour>>b>>minute>>b>>sec;
    endT = day*86400+hour*3600+minute*60+sec;

    int totalT = endT-startT;

    cout<<totalT/86400<<" dia(s)\n";
    totalT%=86400;
    cout<<totalT/3600<<" hora(s)\n";
    totalT%=3600;
    cout<<totalT/60<<" minuto(s)\n";
    totalT%=60;
    cout<<totalT<<" segundo(s)\n";

    return 0;

}
