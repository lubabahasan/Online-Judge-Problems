#include<bits/stdc++.h>
using namespace std;

int main() {
	string alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string comet, group;
    int c=1,g=1;
    cin>>comet>>group;
    for(int i=0;i<comet.length();i++)
    {
        for(int k=0;k<26;k++)
        {
            if(alpha[k]==comet[i])
            {
                c*=(k+1);
            }
        }
    }
    for(int j=0;j<group.length();j++)
    {
        for(int k=0;k<26;k++)
        {
            if(alpha[k]==group[j])
            {
                g*=(k+1);
            }
        }
    }
    if(c%47==g%47)
    {
        cout<<"GO";
    } else {
        cout<<"STAY";
    }
	return 0;
}
