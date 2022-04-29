#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int current = 0, max = 0;

    for(int i = 1; i <= n; i++)
    {
        int a, b;
        cin >> a >> b;

        current -= a;
        current += b;
        max = (current > max) ? current : max;
    }

    cout << max;

    return 0;
}