#include <iostream>

using namespace std;


void printSomething();
void printFavNumber(int favNumber);
int addNumbers(int a, int b);


int main()
{
    int a = 5, b = 7;
    cout << a << " + " << b << " = " << addNumbers(a, b);
    return 0;
}


//function without paremeter
void printSomething()
{
    cout << "ooooo I am text on the screen" << endl;
}


//function with one paremeter
void printFavNumber(int favNumber)
{
    cout << "Sam's fav number is " << favNumber << endl;
}


//function with multiple paremeters
int addNumbers(int a, int b)
{
    return a + b;
}
