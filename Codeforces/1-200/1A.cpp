#include<stdio.h>
int main()
{
    long long int n,m,a;
    scanf("%lli %lli %lli",&n,&m,&a);
    long long int x,y;
    if(n%a==0) x=n/a;
    else x=(n/a)+1;
    if(m%a==0) y=m/a;
    else y=(m/a)+1;
    long long int z=x*y;
    printf("%lli\n",z);
    return 0;
}


/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m,a;
    cin>>n>>m>>a;
    long long int x=ceil(n/double(a))*ceil(m/double(a));
    cout<<x<<'\n';
    return 0;
}
*/

/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m,a;
    cin>>n>>m>>a;
    long long int x,y;
    if(n%a==0) x=n/a;
    else x=(n/a)+1;
    if(m%a==0) y=m/a;
    else y=(m/a)+1;
    long long int z=x*y;
    cout<<z<<'\n';
    return 0;
}
*/
