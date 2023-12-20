#include<iostream>
using namespace std;
int main()
{
    int num1,num2, sum=0;
    cin>>num1>>num2;
    for(int i=min(num1,num2); i<=max(num1,num2); i++)
        if(i%2!=0 && i!=num1 && i!=num2)
            sum+=i;
    cout<<sum<<'\n';
    return 0;
}

