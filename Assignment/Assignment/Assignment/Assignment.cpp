// Assignment.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "../UI1/UI1.h"
#include "../UI2/UI2.h"

#include <boost/locale.hpp>

using namespace std;
using namespace boost::locale;



int main()
{ 
    generator gen;
    gen.add_messages_path(".");
    gen.add_messages_domain("hello");

    //locale::global(gen("de_DE.UTF-8"));
    locale::global(gen(""));
    cout.imbue(std::locale());

    std::cout << translate("Math task application!") << endl;

    cout << translate("server", "connect") << endl;
    std::cout << "Hello World!\n";
    UILibrary::interface1::startScreen();
    UILibrary2::interface2::animateScreen();
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
