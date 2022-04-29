#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string equation;
    int arr[52];
    int count = 0;

    cin >> equation;

    for(int i = 0; i < equation.size(); i++)
    {
        if(equation[i] == '+'){
            continue;
        }
        else {
            arr[count++] = equation[i] - '0';
        }
    }

    sort(arr, arr + count);

    for(int i = 0; i < count; i++){
        cout << arr[i];

        if(i == count - 1){
            break;
        }

        cout << "+";
    }

    return 0;
}
