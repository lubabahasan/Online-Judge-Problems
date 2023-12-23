#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int n;         // how many words I need to give at first
    string str;    // the words I give
    int count = 0; // how many words in between the string's 1st and last letter

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> str;
        if (str.length() > 10)
        {
            for (int j = 1; j < str.length() - 1; j++)
            {
                count++;
            }
            cout << str[0] << count << str[count + 1] << endl;
        }
        else
        {
            cout << str << endl;
        }
    }

    return 0;
}