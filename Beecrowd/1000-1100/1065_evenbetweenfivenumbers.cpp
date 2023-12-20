#include<iostream>
using namespace std;
int main()
{
    int num;
    int n=5,count=0;
    while(n){
        cin>>num;
        if(num%2==0)
            count++;
        n--;
    }
    cout<<count<<" valores pares\n";
    return 0;
}

