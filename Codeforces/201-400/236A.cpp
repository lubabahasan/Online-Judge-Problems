#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    string alpha="abcdefghijklmnopqrstuvwxyz",name;
    cin >> name;
    int count[26]={0},same=0;
    for(int i=0;i<name.length();i++)
    {
        for(int j=0;j<26;j++)
        {
            if(name[i]==alpha[j])
            {
                count[j]+=1;
                if(count[j]>1)
                same++;
            }
        }
    
    }
    if((name.length()-same)%2==0)
    {
        cout<<"CHAT WITH HER!"<<endl;
    } else {
        cout<<"IGNORE HIM!"<<endl;
    }
    return 0;
}