#include <iostream>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    int right = 1;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            if(i % 2 == 0)
            {
                if(right == 1){
                    if(j == m){
                        cout << "#";
                        right = 0;
                    }
                    else {
                        cout << ".";
                    }
                }
                else{
                    if(j == 1){
                        cout << "#";
                    }
                    else {
                        cout << ".";
                    }

                    if(j == m){
                        right = 1;
                    }
                }
            }
            else {
                cout << "#";
            }
        }
        cout << endl;
    }

    return 0;
}