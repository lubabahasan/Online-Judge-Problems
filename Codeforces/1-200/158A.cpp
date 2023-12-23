#include<iostream>
using namespace std;
int main()
{
    int n,k,adv=0;
    cin>>n>>k;
    int score[n];
    for(int i=0;i<n;i++)
    {
        cin>>score[i];
    }
    for(int i=0;i<n;i++)
    {
        if(score[i]>0 && score[i]>=score[k-1])
        {
            adv++;
        }
    }
    cout<<adv<<endl;

    return 0;
}