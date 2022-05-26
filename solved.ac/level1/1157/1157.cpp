#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str;
    getline(cin, str);

    for (int i = 0; i < str.length(); i++)
    {
        printf("", (char)str[i]);
        if (str[i] > 'A' && str[i] < 'Z')
        {
            str[i] = str[i] + 32;
        }
    }

    int *count = new int[26];

    for (int i = 0; i < 26; i++)
        count[i] = 0;

    for (int i = 0; i < str.length(); i++)
        count[str[i] - 'a']++;

    int maxIndex = 0;
    bool isDuplicate = false;
    for (int i = 1; i < 26; i++)
    {
        if (count[i] > count[maxIndex])
        {
            maxIndex = i;
            isDuplicate = false;
            continue;
        }
        if (count[i] == count[maxIndex])
        {
            isDuplicate = true;
        }
    }

    if (isDuplicate)
        cout << "?";
    else
        cout << (char)(maxIndex + 'a');
}