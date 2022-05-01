#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int count = 0;

    if(n >= 100){
        int d100 = n / 100;
        count += d100;
        n -= d100 * 100;
    }
    
    if(n >= 20){
        int d20 = n / 20;
        count += d20;
        n -= d20 * 20;
    }
    
    if(n >= 10){
        int d10 = n / 10;
        count += d10;
        n -= d10 * 10; 
    }
    
    if(n >= 5){
        int d5 = n / 5;
        count += d5;
        n -= d5 * 5;
    }
    
    if (n >= 1){
        int d1 = n / 1;
        count += d1;
        n -= d1 * 1;
    }
    

    cout << count;

    return 0;
}