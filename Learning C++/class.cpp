#include <iostream>
#include <string>

using namespace std;

//declaring class: 
//write class name and put curly braces. put a ";" at the end.
class randomClass
{
    //make all your variables private
    private:
        string name; 

    //add access specifier "public" 
    //if you want to use the methods outside class.
    public:
        void coolSaying()
        {
            cout << "Sam's really cool 😎" << endl;
        }

        //to access variables use setter and getter functions
        //setter function sets the variable value
        //getter function returns the variable value    

        //setter function
        void setName(string x)
        {
            name = x;
        }

        //getter function
        string getName()
        {
            return name;
        }

};

int main()
{
    //object- reference of a class
    //declaring a object- classname objectname;
    randomClass randomeStuff;

    //getting methods and properties from object
    //objectname.method()
    randomeStuff.coolSaying();
    randomeStuff.setName("Sam");
    
    cout << "This coder's name is " << randomeStuff.getName() << endl;

    return 0;
}