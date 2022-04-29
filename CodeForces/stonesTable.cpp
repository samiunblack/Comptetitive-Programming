"#include <iostream>
#include <string>

using namespace std;

int main()
{
    int count = 0;

    int n;
    cin >> n;

    string stones;
    cin >> stones;

    for(int i = 1; i < stones.size(); i++){
        if(stones[i - 1] == stones[i]){
            count++;
        }
    }

    cout << count;

    return 0;
*y}"