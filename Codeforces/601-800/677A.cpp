#include <bits/stdc++.h>
using namespace std;

int main()
{
    int numfren;
    int height;
    cin>>numfren>>height;
    int frenh,row;
    for (int i=0; i<numfren; i++)
    {
        cin>>frenh;
        if (frenh<height || frenh==height) row++;
        else row+=2;
    }
    cout<<row<<endl;
}