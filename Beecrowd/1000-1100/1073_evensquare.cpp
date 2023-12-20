
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=2; i<=n; i+=2){
        int square;
        square=i*i;
        cout<<i<<"^"<<2<<" = "<<square<<'\n';
    }
    return 0;
}
