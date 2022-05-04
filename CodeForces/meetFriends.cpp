#include <iostream>
#include <cstdlib>
#include <algorithm>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    int x1 = abs(a - b) + abs(a - c);
    int x2 = abs(b - a) + abs(b - c);
    int x3 = abs(c - a) + abs(c - b);

    int max = (x1 < x2 && x1 < x3) ? x1 : (x2 < x1 && x2 < x3) ? x2 : x3;

    cout << max;

    return 0;
}
