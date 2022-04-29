#include <iostream>

using namespace std;

int main()
{
    int w, k, n;
    cin >> w >> k >> n;

    int total = 0;

    for(int i = 1; i <= n; i++)
    {
       total += i * w;
       
    }

    if(total <= k){
        cout << 0;
    }
    else {
        cout << total - k;
    }

    return 0;
}