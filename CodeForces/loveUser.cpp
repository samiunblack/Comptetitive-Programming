#include <iostream>

using namespace std;

int main()
{
    int n, a;
    cin >> n >> a;

    int maxA = a, minA = a;

    int count = 0;

    for(int i = 1; i < n; i++)
    {
        cin >> a;
        if(a > maxA){
            count++;
            maxA = a;
        }
        else if(a < minA)
        {
            count++;
            minA = a;
        }
    }

    cout << count;

    return 0;
}