#include <iostream>
#include <cctype>

using namespace std;

int main()
{
    string word;
    cin >> word;

    int upper = 0;

    for(int i = 0; i < word.size(); i++){
        if(isupper(word[i]))
        {
            upper++;
        }
    }

    int lower = word.size() - upper;

    if(upper > lower){
        for(int i = 0; i < word.size(); i++){
            putchar(toupper(word[i]));
        }
    }
    else {
        for(int i = 0; i < word.size(); i++){
            putchar(tolower(word[i]));
        }
    }

    return 0;
}