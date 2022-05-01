#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string n1, n2, f;
    cin >> n1 >> n2 >> f;

    string s = n1 + n2;

    sort(s.begin(), s.end());
    sort(f.begin(), f.end());

    if(s == f){
        cout << "YES";
    }
    else {
        cout << "NO";
    }

    return 0;
}