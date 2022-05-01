#include <iostream>

using namespace std;

int main()
{
    int n, a;

    cin >> n >> a;

    int maxA = a, minA = a, maxI = 0, minI = 0;   

    for(int i = 1; i < n; ++i){
        cin >> a;

        if(a > maxA){
            maxA = a;
            maxI = i;
        } 
        if(a <= minA){
            minA = a;
            minI = i;
        }
    }

    cout << maxI +  (n - 1 - minI) - (minI < maxI ? 1: 0);

    return 0;
}
