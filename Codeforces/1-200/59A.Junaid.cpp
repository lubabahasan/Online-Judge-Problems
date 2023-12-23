#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    char s[101];
    int uc=0, lc=0;
    cin>>s;
    char s2,s3[strlen(s)],s4,s5[strlen(s)];
 
    for (int i=0;i<strlen(s);i++)
    {
        s2=toupper(s[i]);
        s3[i]=s2;
    }
    
    for (int j=0; j<strlen(s);j++)
    {
        if (s[j]>='A' && s[j]<='Z')
        uc++;
        if (s[j]>='a' && s[j]<='z')
        lc++;
    }
 
    for (int k=0; k<strlen(s); k++)
    {
        s4 = tolower(s[k]);
        s5[k] = s4;
    }
    if (uc>lc)
    {
        for(int i=0;i<strlen(s);i++)
        {
            cout<<s3[i];
        }
    }
    
    else
    {
        for(int i=0;i<strlen(s);i++)
        {
            cout<<s5[i];
        }
    }

    return 0;
}