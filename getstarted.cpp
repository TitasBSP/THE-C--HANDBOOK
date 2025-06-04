#include <iostream>
#include <string>

#include "surprise.h"

#define SEVEN 7 // Replaces every instance of "SEVEN" with the integer 7, also used to create constants

using namespace std; // If you dont want to write std:: at the start of each line, use this! Don't use functions with the namespace though.

void returnA(int amount) // This example function returns the letter "a" as many times as it is written when the user calls the function
{ // Note that "int amount" is a local variable and does not yield anything outside of the function!
    for (int i = 0; i < amount; i++) {
       std::cout << "a" << std::endl;
    }
}

string globalVar = "This is a global variable which is defined outside the function.";

int main()
{
    std::cout << "Hello world.\n" << std::endl;
    std::cout << "Hello world in a new line.\n" << std::endl;

    // this is a comment

    /* this is a
        multi line 
        comment */

    int x; // You can define a variable without having a meaning yet
    int a, b; // You can define multiple variables with commas

    x = 42; // You can later define "x" and redefine it!

    std::cout << x << std::endl; // This line of code will print out x's value!

    int y ( 12 ); // Defines the variable and initializes it with the value 12
    int z { 5 }; // Defines the variable in a LIST and initializes it with the value 5
    int zero {}; // Defining the LIST as value 0

    double boob = 8.0085;
    float poop = 6.0065;
    std::string greeting = "yello"; // String defining in C++

    std::cout << greeting << "\n"; // better to end with new line than std::endl, takes up less space overall

    std::cin >> x; // Takes in values which are then stored into x, same as "input()"
    std::cout << "You entered " << x << "\n"; // Prints out the typed variable in a new line!

    std::cout << sizeof(int) << '\n'; // Will print out the size of the variables, in this scenario it's 4 bytes.

    std::cout
        << "This line works too, but why?\n"; // Well because whitespace and formatting in C++ is great!
    
    std::string formatting = "random";
    std::string should     = "random";
    std::string be         = "random";
    std::string done       = "random";
    std::string like       = "random";
    std::string dis        = "random";
    // You can see that it's way better like this, right?

    // SUMMARY FOR CHAPTER 1: https://www.learncpp.com/cpp-tutorial/chapter-1-summary-and-quiz/

    ///////////////////////////
    // IMPORTANT MEMORY RULE //
    // INT: 2-4 BYTES        //
    // FLOAT: 4 BYTES        //
    // DOUBLE: 8 BYTES       //
    // CHAR: 1 BYTE          //
    ///////////////////////////

    ///////////////////////////       //////////////////////////       /////////////////////////////
    // OPERATORS             //       // ASSIGNMENT OPERATORS //       // COMPARISON OPERATORS    //
    // + for addition        //       // += 3 = (x=x+3)       //       // == for equal to         //
    // - for subtraction     //       // -= 3 = (x=x-3)       //       // != for not equal to     //
    // * for multiplication  //       // *= 3 = (x=x*3)       //       // > for greater than      //
    // / for division        //       // /= 3 = (x=x/3)       //       // < for less than         //
    // % for modulus         //       // %= 3 = (x=x&3)       //       // >= for greater or equal //
    // ++ for increment      //       //                      //       // <= for less or equal    //
    // -- for decrement      //       //                      //       //                         //
    // && for and            //       //                      //       //                         //
    // || for or             //       //                      //       //                         //
    // ! for not             //       //                      //       //                         //
    ///////////////////////////       //////////////////////////       /////////////////////////////

    // IMPORTANT RULE, std::cin uses >>, std:cout uses <<

    returnA(12); // "a" gets printed the amount of times the value is described in returnA's function parentheses.

    int r{ 8 }; // the 'r' variable starts its lifetime here
    returnA(r);

    // RULE, void function cannot return anything, and int functions require something to be returned.

    /* RULE, avoid creating functions after the main function, compiler doesn't understand this in sequence.
        If you need to create functions like this, declare the first line beforehand, and then the body after the function like this: */

    /* ------------------------------------------------------------------------------

    int add(int x, int y);

    int main()
    {
        std::cout << "The sum of 3 and 4 is: " << add(3, 4) << '\n';
        return 0;
    }

    int add(int x, int y)
    {
        return x + y;
    }   

    ------------------------------------------------------------------------------ */

    #ifdef SEVEN
        cout << "SEVEN IS PRINTED!\n"; // Since "SEVEN" is defined, this line should be printed
    #endif

    #if 0 // #if 0 prevents code from being compiled, it's like a clearer multi-line comment.
        cout << "This line will be excluded, just like you.";
    #endif

    #ifdef WORKING // You can see that including surprise.h works because C++ allows custom header files, and we defined a macro in the header
        cout << WORKING;
    #endif

    // If you have to use the same header in multiple spaces, use header guards like this:

    /*
    #ifndef THIS_MACRO
    #define THIS_MACRO

    // Have your code here if necessary

    #endif  
    */

    // If you don't know how to create a program from this syntax yet, don't worry
    // Follow this link here: https://www.learncpp.com/cpp-tutorial/how-to-design-your-first-programs/
    // SUMMARY FOR CHAPTER 2: https://www.learncpp.com/cpp-tutorial/chapter-2-summary-and-quiz/




    return 0;
} // the 'r' variable goes out of scope after the function is ended, and in other functions it would be out of scope.
