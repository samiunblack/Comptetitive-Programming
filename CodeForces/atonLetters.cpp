#include <iostream>
#include <set>
#include <string>

using namespace std;

int main()
{
    string s;
    set <char> a;
    getline(cin, s);

    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] >= 'a' && s[i] <= 'z')
        {
            a.insert(s[i]);
        }
    }

    cout << a.size();

    return 0;
}