#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    
    int arr[n];

    int count = 1;

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }


    for(int i = 1; i < n; i++){
        if(arr[i - 1] != arr[i]){
            count++;
        }
    }

    cout << count;

    return 0;
}