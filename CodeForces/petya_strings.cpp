#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string str1;
    string str2;

    int sum1 = 0, sum2 = 0;

    cin >> str1;
    cin >> str2;

    for_each(str1.begin(), str1.end(), [](char & c){
        c = ::tolower(c);
    });

    for_each(str2.begin(), str2.end(), [](char & c){
        c = ::tolower(c);
    });



    if(str1 < str2){
        cout << -1;
    }
    else if(str1 > str2){
        cout << 1;
    }
    else {
        cout << 0;
    }

    return 0;
}