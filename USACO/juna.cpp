/*
ID: Lubaba Hasan [iqras431]
TASK: ride
LANG: C++
*/
#include<iostream>
using namespace std;

int main() {
    int n;
    char str[n][20] = {};
    cout<<"how many strings?"<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>str[i];
    }
    for(int i=0;i<n;i++)
    {
        cout<<str[i]<<endl;
    }
}

