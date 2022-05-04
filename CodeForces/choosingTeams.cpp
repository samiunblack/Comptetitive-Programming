#include <iostream>

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int currTeam = 0;
    int totalTeam = 0;

    int valid = 5 - k;

    for(int i = 0; i < n; i++){
        int participate;
        cin >> participate;

        if(participate <= valid){
            currTeam++;
        }

        if(currTeam == 3){
            totalTeam++;
            currTeam = 0;
        }
    }

    cout << totalTeam;
}