#include <iostream>
using namespace std;
 
int main()
{
    string name;
    int matching_letter = 0;
    cin >> name;
    for (int i = 0; i < name.length(); i++)
    {
        for (int j = 1; j < name.length(); j++)
        {
            if (name[i] == name[j] && name[i] != '0')
            {
                matching_letter++;
                name[j] = '0';
            }
        }
    }
    if ((name.length() - matching_letter) % 2 == 0)
    {
        cout << "CHAT WITH HER!" << endl;
    }
    else
    {
        cout << "IGNORE HIM!" << endl;
    }
}