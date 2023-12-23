#include<iostream>
using namespace std;
int main()
{
    int fren;
    cin>>fren;
    if(fren%5>0 && fren%5<5)
    {
        cout<<(fren/5)+1<<endl;
    } else {
        cout<<(fren/5)<<endl;
    }
    return 0;
}