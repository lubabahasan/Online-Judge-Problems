#include <iostream>
#include <cctype>
#include <cstring>
using namespace std;
 
int main()
{
    char s[1000];
    char s2, s3[1000], s4, s5[1000];
    int uc = 0, lc = 0;
    cin >> s;
 
    for (int i = 0; i < strlen(s); i++)
    {
        s2 = toupper(s[i]);
        s3[i] = s2;
    }
 
    for (int j = 0; j < strlen(s); j++)
    {
        if (s[j] >= 'A' && s[j] <= 'Z')
        {
            uc++;
        }
        if (s[j] >= 'a' && s[j] <= 'z')
        {
            lc++;
        }
    }
 
    for (int k = 0; k < strlen(s); k++)
    {
        s4 = tolower(s[k]);
        s5[k] = s4;
    }
    if (lc > uc || lc == uc)
    {
        cout << s5 << endl;
    }
    else
    {
        cout << s3 << endl;
    }
}