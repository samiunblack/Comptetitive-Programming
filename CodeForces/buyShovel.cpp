#include <iostream>

using namespace std;

int main()
{
    int p, r;
    cin >> p >> r;

    int noChange = p;
    int count = 1;

    if(noChange % 10 == r || noChange % 10 == 0){
        cout << 1;
        return 0;
    }

    while(noChange % 10 > 0){
        
        noChange = p * count; 
        
        if(noChange % 10 == r || noChange % 10 == 0){
           break; 
        }

        count++;

    }

    cout << count;

    return 0;
}