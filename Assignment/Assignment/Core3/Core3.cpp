// Core3.cpp : Defines the exported functions for the DLL.
//

#include "framework.h"
#include "Core3.h"
#include<iostream>
using namespace std;
#include <boost/locale.hpp>
using namespace boost::locale;


// This is an example of an exported variable
CORE3_API int nCore3=0;

// This is an example of an exported function.
CORE3_API int fnCore3(void)
{
    return 0;
}

// This is the constructor of a class that has been exported.
CCore3::CCore3()
{
    return;
}
int CoreLibrary3::helper3::CheckIfScreenExixts()
{
    cout << "Checked if a screen exists" << endl;
    return 1;
}

int CoreLibrary3::helper3::CheckIfAnimationCompleted()
{
    generator gen;
    gen.add_messages_path("C:\\Users\\bhava\\OneDrive\\Desktop\\Courses\\SoftwareArchitecture\\Assignment\\Assignment\\Core3");
    gen.add_messages_domain("core3");

    //locale::global(gen("de_DE.UTF-8"));
    locale::global(gen(""));
    cout.imbue(std::locale());
    std::cout << translate("Checking if animation is completed")<< endl;
    return 1;
}

