#include <iostream>
#include <string>

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

    




    return 0;
}
