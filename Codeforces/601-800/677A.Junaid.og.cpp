#include <iostream>
using namespace std;

int main()
{
    int friends;
    int height;
    cin >> friends >> height;
    int n[friends];
    int row = 0;
    for (int i = 0; i < friends; i++)
    {
        cin >> n[i];
    }
    for (int i = 0; i < friends; i++)
    {
        if (n[i] < height || n[i] == height)
        {
            row = row + 1;
        }
        else
        {
            row = row + 2;
        }
    }
    cout << row << endl;
}