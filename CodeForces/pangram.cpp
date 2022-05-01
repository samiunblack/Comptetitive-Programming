#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int n;
    string s;
    cin >> n;
    cin >> s;

    vector <bool> alpha(26, false);

    if(n < 26){
        cout << "NO";
    }
    else { 
        for(int i = 0; i < s.size(); i++)
        {
            int index = 0;
            if(s[i] >= 'A' && s[i] <= 'Z')
            {
                index = s[i] - 'A';
            }
            else if(s[i] >= 'a' && s[i] <= 'z')
            {
                index = s[i] - 'a';
            }

            alpha[index] = true;
        }

        for(int i = 0; i < 26; i++){
            if(alpha[i] == false){
                printf("NO");
                return 0;
            }
        }
        printf("YES");
    }

    return 0;
}