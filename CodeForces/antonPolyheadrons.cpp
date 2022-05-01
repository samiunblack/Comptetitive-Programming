#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{
    unordered_map <string, int> hedrons;

    hedrons["Tetrahedron"] = 4;
    hedrons["Cube"] = 6;
    hedrons["Octahedron"] = 8;
    hedrons["Dodecahedron"] = 12;
    hedrons["Icosahedron"] = 20;

    int n;
    cin >> n;

    int count = 0;

    for(int i = 0; i < n; i++)
    {
        string shape;
        cin >> shape;

        count += hedrons[shape];
    }

    cout << count;

    return 0;
}