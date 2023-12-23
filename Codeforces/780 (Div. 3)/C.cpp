#include <bits/stdc++.h>//计算每个子串出现个数与其最大长度相乘的最大值
using namespace  std;
#define int long long
const int N = 2000010;
#define PII pair<int,int>
int n,m,k;
int a[N],b[N];
int mod =32768;

signed main()
{
    int t;
    cin>>t;
    while(t--)
    {

        string s;
        cin>>s;
        map<char,int> mp;
        int ans=0;
        for(int i=0;s[i];i++)
        {
            if(mp[s[i]])
            {
                mp.clear();
                ans+=2;
            }
            else
            {
                mp[s[i]]++;
            }
        }
        cout<<s.size()-ans<<endl;

    }
    return 0;
}