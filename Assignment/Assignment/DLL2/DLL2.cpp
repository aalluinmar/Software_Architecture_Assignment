// DLL2.cpp : Defines the exported functions for the DLL.
//

#include "framework.h"
#include "DLL2.h"
#include"../Core2/Core2.h"
#include<iostream>
using namespace std;
#include <boost/locale.hpp>
using namespace boost::locale;


// This is an example of an exported variable
DLL2_API int nDLL2=0;

// This is an example of an exported function.
DLL2_API int fnDLL2(void)
{
    return 0;
}

// This is the constructor of a class that has been exported.
CDLL2::CDLL2()
{
    return;
}

namespace DynamicCrudLibrary2
{
     void Animate::animateScreen() {
        if (CoreLibrary2::helper2::CheckForStarsAnimation()) {
            generator gen;
            gen.add_messages_path("C:\\Users\\bhava\\OneDrive\\Desktop\\Courses\\SoftwareArchitecture\\Assignment\\Assignment\\DLL2");
            gen.add_messages_domain("dll2");

            locale::global(gen("de_DE.UTF-8"));
            //locale::global(gen(""));
            cout.imbue(std::locale());

            std:: cout<< translate("Printing stars") << endl;
            cout << "***********************************************" << endl;
        }

    }

}
