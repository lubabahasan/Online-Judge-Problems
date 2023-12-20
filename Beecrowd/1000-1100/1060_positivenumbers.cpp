#include<iostream>
using namespace std;
int main()
{
    float num;
    int n=6,count=0;
    while(n){
        cin>>num;
        if(num>0.0)
            count++;
        n--;
    }
    cout<<count<<" valores positivos\n";
    return 0;
}

