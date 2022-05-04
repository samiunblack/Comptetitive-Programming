#include <iostream>

using namespace std;

int main()
{
    int p, m;
    cin >> p >> m;

    int total = 60 * 4;
    int rem = total - m;

    for(int i = 1; i <= p; i++)
    {
        if(i * 5 <= rem)
        {
            rem -= i * 5;
        }
        else {
            cout << i - 1;
            return 0;
        }
    }

    cout << p;
    return 0;
}