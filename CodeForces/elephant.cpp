#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int pass = n / 5;
    if(n % 5 > 0){
        pass++;
    }

    cout << pass;
    
    return 0;
}