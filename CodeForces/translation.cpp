#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    string s, t;

    cin >> s >> t;
    reverse(t.begin(), t.end());

    if(s == t)
    {
        printf("YES");
    }
    else {
        printf("NO");
    }

    return 0;
}