#include <iostream>

using namespace std;

int main()
{
    int r, b;
    cin >> r >> b;

    int f = 0, c = 0;

    while (r && b)
    {
        f++;
        r--;
        b--;
    }

    while (r >= 2)
    {
        c++;
        r -= 2;
    }

    while (b >= 2)
    {
        c++;
        b -= 2;
    }

    cout << f << " " << c;

    return 0;
}