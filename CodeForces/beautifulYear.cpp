#include <iostream>
#include <set>

using namespace std;

int main()
{
    int year;
    cin >> year;

    set <int> y;

    while(1)
    {
        year++;

        int temp = year; 
        while(temp > 0)
        {
            y.insert(temp % 10);
            temp /= 10;
        }

        temp = year;
        int count = 0;

        while(temp > 0)
        {
            temp /= 10;
            count++;
        }

        int ysize = y.size();

        if(y.size() == count){
            cout << year;
            break;
        }
        else {
            y.erase(y.begin(), y.end());
        }
    }

    return 0;
}