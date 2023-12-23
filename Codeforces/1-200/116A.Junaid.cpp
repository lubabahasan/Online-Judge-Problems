#include <iostream>
using namespace std;

int main()
{
    int n; // this represents how many stops the train will visit
    cin >> n;
    int a[n], b[n], temp = 0, temp2[n], capacity;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i] >> b[i];
    }
    for (int k = 0; k < n; k++)
    {
        temp2[k] = (temp - a[k]) + b[k];
        temp = temp2[k];
    }
    
    capacity=temp2[0];

    for (int j = 1; j < n; j++)
    {
        if(temp2[j]>capacity) capacity=temp2[j];
    }
    cout << endl << capacity << endl;
}