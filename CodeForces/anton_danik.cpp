#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;
    string winners;
    
    cin >> n;
    cin >> winners;

    int anton = 0, danik = 0;

    for(int i = 0; i < n; i++){
        if(winners[i] == 'A'){
            anton++;
        }
        else if(winners[i] == 'D'){
            danik++;
        }
    }

    string winner = (anton > danik) ? "Anton" 
    : (danik > anton) ? "Danik" : "Friendship";

    cout << winner;

    return 0;
}