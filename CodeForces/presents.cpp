#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int ans[n];

    for(int i = 0; i < n; i++){
        int p;
        cin >> p;

        ans[p - 1] = i;

    }

    for(int i = 0; i < n; i++){
        cout << ans[i] + 1 << " ";       
    }

    return 0;
}