#include<iostream>
using namespace std;

int main()
{
    int n, c=0;
    cin>>n;
    int num, t=n;
    while(n--){
        cin>>num;
        if(num>9 && num<21)
            c++;
    }
    cout<<c<<" in\n"<<t-c<<" out\n";
    return 0;
}
