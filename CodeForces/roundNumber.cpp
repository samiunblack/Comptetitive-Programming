#include <iostream>
#include <vector>

using namespace std;
int main()
{
    int a;
    cin>>a;

    for(int i=0; i<a; i++)
    {
        vector <int> round;
        int n;
        cin >> n;

        if(n % 10 != 0){
            round.push_back(n % 10);
        }
        n -= n % 10;

        if(n % 100 != 0){
            round.push_back(n % 100);
        }
        n -= n % 100;

        if(n % 1000 != 0){
            round.push_back(n % 1000);
        }
        n -= n % 1000;

        if(n % 10000 != 0){
            round.push_back(n % 10000);
        }
        n -= n % 10000;

        if(n >= 10000 && n % 10000 == 0){
            round.push_back(n);
        }

        cout << round.size() << endl;

        for(int i = 0; i < round.size(); i++){
            cout << round[i] << " ";
        }
        cout << endl;
    }
}