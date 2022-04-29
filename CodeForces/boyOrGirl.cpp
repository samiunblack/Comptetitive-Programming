#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

int main()
{
    unordered_map<char, int> charFreq;

    string name;
    cin >> name;

    for(int i = 0; i < name.size(); i++)
    {
        if(charFreq.find(name[i]) == charFreq.end()){
            charFreq.insert({name[i], 0});
        }
        charFreq[name[i]] += 1;
    }

    if(charFreq.size() % 2 == 0){
        cout << "CHAT WITH HER!";
    }
    else{
        cout << "IGNORE HIM!";
    }
    
    return 0;
}