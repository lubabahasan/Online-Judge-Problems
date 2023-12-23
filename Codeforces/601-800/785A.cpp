#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum=0;
    string shape;
    cin>>n;
    while(n--)
    {
        cin>>shape;
        if(shape=="Tetrahedron") sum+=4;
        else if(shape=="Icosahedron") sum+=20;
        else if(shape=="Octahedron") sum+=8;
        else if(shape=="Dodecahedron") sum+=12;
        else sum+=6;
    }
    cout<<sum<<"\n";
    return 0;
}