#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int totalPolice = 0;
    int crime = 0;

    for(int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        if(a == -1)
        {
            if(totalPolice == 0)
            {
                crime++;
            }
            else
            {
                totalPolice--;
            }
        }
        else {
            totalPolice += a;
        }
    }

    cout << crime;

    return 0;
}