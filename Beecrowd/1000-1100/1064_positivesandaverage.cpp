#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    float num, sum=0;
    int n=6,c=0;
    while(n){
        cin>>num;
        if(num>0.0){
            sum+=num;
            c++;
        }
        n--;
    }
    cout<<c<<" valores positivos\n"<<fixed<<setprecision(1)<<float(sum/c)<<'\n';
    return 0;
}

