// Core2.cpp : Defines the exported functions for the DLL.
//

#include "framework.h"
#include "Core2.h"
#include<iostream>
using namespace std;
#include <boost/locale.hpp>
using namespace boost::locale;


// This is an example of an exported variable
CORE2_API int nCore2=0;

// This is an example of an exported function.
CORE2_API int fnCore2(void)
{
    return 0;
}

// This is the constructor of a class that has been exported.
CCore2::CCore2()
{
    return;
}
int CoreLibrary2::helper2::RemoveIfExists(std::string name)
{
    cout << "removing only if a task exists" << endl;
    return 1;
}

int CoreLibrary2::helper2::CheckForStarsAnimation()
{
    generator gen;
    gen.add_messages_path("C:\\Users\\bhava\\OneDrive\\Desktop\\Courses\\SoftwareArchitecture\\Assignment\\Assignment\\Core2");
    gen.add_messages_domain("core2");

    locale::global(gen("de_DE.UTF-8"));
    //locale::global(gen(""));
    cout.imbue(std::locale());
    std::cout << translate("Checking if any stars are printed") << endl;
    return 1;
}
