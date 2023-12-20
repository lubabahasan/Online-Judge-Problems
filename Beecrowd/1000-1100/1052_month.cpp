#include<iostream>
using namespace std;

int main()
{
    string month[] = {"January","February","March","April","May","June","July","August","September","October","November","December"};
    int num;
    cin>>num;
    cout<<month[num-1]<<'\n';
    return 0;
}
