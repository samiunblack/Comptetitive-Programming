#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n;
    cin >> n;

    double sum = 0;

    for(int i = 0; i < n; i++){
        int d;
        cin >> d;        

        sum += d; 
    }
    cout << fixed << setprecision(12);
    cout << (double) sum/n;

    return 0;
}