// Core1.cpp : Defines the exported functions for the DLL.
//

#include "framework.h"
#include "Core1.h"
using namespace std;
#include <boost/locale.hpp>
using namespace boost::locale;

// This is an example of an exported variable
CORE1_API int nCore1=0;

// This is an example of an exported function.
CORE1_API int fnCore1(void)
{
    return 0;
}

// This is the constructor of a class that has been exported.
CCore1::CCore1()
{
    return;
}

int CoreLibrary1::helper1::CheckIfExists(std::string name)
{
    
    generator gen;
    gen.add_messages_path("C:\\Users\\bhava\\OneDrive\\Desktop\\Courses\\SoftwareArchitecture\\Assignment\\Assignment\\Core1");
    gen.add_messages_domain("core1");

    locale::global(gen("de_DE.UTF-8"));
    //locale::global(gen(""));
    cout.imbue(std::locale());   
    std::cout << translate("Checked if a task exists") << endl;
    return 1;
}

