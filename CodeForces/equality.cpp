#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int max = 0;
    int citizens[n];
    int burlesNeeded = 0;

    for(int i = 0; i < n; i++)
    {
        int a;
        cin >> a;

        if(a > max)
        {
            max = a;
        }

        citizens[i] = a;
    }

    for(int i = 0; i < n; i++){
        burlesNeeded += max - citizens[i];        
    }

    cout << burlesNeeded;
}