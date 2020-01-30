#include <iostream>
#include <string>

int main()
{
    std::cout << "Please enter your name:";
    std::string name;
    std::cin >> name;
    
    //build the greeting string
    const std::string greeting = "Hello, " + name + "!";

    //build the 2nd and 4th lines
    const std::string spaces(greeting.size(), ' ');
    const std::string second = "* " + spaces + " *";

    //build the 1st and 5th lines
    const std::string first(second.size(), '*');

    //write all
    std::cout << std::endl;
    std::cout << first << std::endl;
    std::cout << second << std::endl;
    std::cout << "* " << greeting << " *" << std::endl;
    std::cout << second << std::endl;
    std::cout << first << std::endl;

    //1-1
    const std::string hello = "hello";
    const std::string msg = hello + ", world" + "!";
    std::cout << msg << std::endl;

    //1-2 - invalid
    //const std::string exclaim = "!";
    //const std::string msg1 = "hello" + ", world" + exclaim;
    //std::cout << msg1 << std::endl;

    //1-3
    {
        const std::string s = "a string";
        std::cout << s << std::endl;
    }
    {
        const std::string s = "another string";
        std::cout << s << std::endl;
    }

    //1-4
    {
        const std::string s = "a string";
        std::cout << s << std::endl;
    {
        const std::string s = "another string";
        std::cout << s << std::endl;
    }}

    //1-5
    //invalid as x is out of scope
    //{std::string s = "a string";
    //{std::string x = s + "really";
    //std::cout << s << std::endl;}
    //std::cout << x << std::endl;}

    //valid
    {std::string s = "a string";
    {std::string x = s + ", really";
    std::cout << s << std::endl;
    std::cout << x << std::endl;}}

    //1-6

    std::cout << "what is your name? ";
    std::string name1;
    std::cin >> name1;
    std::cout << "Hello, " << name1
    << std::endl << "And what is yours? ";
    std::cin >> name1;
    std::cout << "Hello, " << name1
    << "; nice to meet you too!" << std::endl;

    return 0;
}
