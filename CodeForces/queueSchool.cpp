#include <iostream>

using namespace std;

int main()
{
    int q, n;
    string queue;
    cin >> q >>  n;
    cin >> queue;

    for(int i = 0; i < n; i++)
    {
       for(int j = 1; j < q; j++) 
       {
            if(queue[j] == 'G' && queue[j - 1] == 'B'){
                char temp = queue[j - 1];
                queue[j - 1] = queue[j];
                queue[j] = temp;
                j++;
            }
       }
    }

    cout << queue;
    return 0;
}