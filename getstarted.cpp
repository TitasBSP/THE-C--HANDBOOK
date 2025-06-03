#include <iostream>
#include <string>

void returnA(int amount) // This example function returns the letter "a" as many times as it is written when the user calls the function
{
    for (int i = 0; i < amount; i++) {
       std::cout << "a" << std::endl;
    }
}

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
        << "This line works too, but why?"; // Well because whitespace and formatting in C++ is great!
    
    std::string formatting = "random";
    std::string should     = "random";
    std::string be         = "random";
    std::string done       = "random";
    std::string like       = "random";
    std::string dis        = "random";
    // You can see that it's way better like this, right?

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

    returnA(12);


    return 0;
}
