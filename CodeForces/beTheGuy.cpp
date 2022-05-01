#include <iostream>
#include <set>

using namespace std;

int main()
{
    int n;
    set <int> levelPassed;
    cin >> n;

    int x;
    cin >> x;
    for(int i = 0; i < x; i++)
    {
        int level;
        cin >> level;
        levelPassed.insert(level);
    }

    int y;
    cin >> y;
    for(int i = 0; i < y; i++){
        int level;
        cin >> level;
        levelPassed.insert(level);
    }

    if(levelPassed.size() == n){
        cout << "I become the guy.";
    }
    else {
        cout << "Oh, my keyboard!";
    }

    return 0;
}