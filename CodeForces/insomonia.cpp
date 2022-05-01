#include <iostream>
#include <unordered_set>

using namespace std;

int main()
{
    int k, l, m, n, dragon;
    cin >> k;
    cin >> l;
    cin >> m;
    cin >> n;
    cin >> dragon;

    unordered_set <int> damaged;

    int j = k;
    while(j <= dragon)
    {
        damaged.insert(j);
        j += k;
    }



    j = l;
    while(j <= dragon)
    {
        if(damaged.find(j) == damaged.end())
        {
            damaged.insert(j);
            
        }
        j += l;
    }

    j = m;
    while(j <= dragon)
    {
        if(damaged.find(j) == damaged.end())
        {
            damaged.insert(j);
        }

        j += m;
    }

    j = n;
    while(j <= dragon)
    {
        if(damaged.find(j) == damaged.end())
        {
            damaged.insert(j);
        }

        j += n;
    }

    cout << damaged.size();


    return 0;
}