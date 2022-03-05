// UI2.cpp : Defines the exported functions for the DLL.
//

#include "framework.h"
#include "UI2.h"
#include<iostream>
#include "../DLL2/DLL2.h"
#include "../Core3/Core3.h"
using namespace std;
#include <boost/locale.hpp>
using namespace boost::locale;


// This is an example of an exported variable
UI2_API int nUI2=0;

// This is an example of an exported function.
UI2_API int fnUI2(void)
{
    return 0;
}

// This is the constructor of a class that has been exported.
CUI2::CUI2()
{
    return;
}

void UILibrary2::interface2::animateScreen()
{
    
    generator gen;
    gen.add_messages_path("C:\\Users\\bhava\\OneDrive\\Desktop\\Courses\\SoftwareArchitecture\\Assignment\\Assignment\\UI2");
    gen.add_messages_domain("ui2");

    locale::global(gen("de_DE.UTF-8"));
    //locale::global(gen(""));
    cout.imbue(std::locale());

    std::cout << translate("animating the screen") << endl;
    DynamicCrudLibrary2::Animate::animateScreen();
    if (CoreLibrary3::helper3::CheckIfAnimationCompleted()) {

        cout << "Animation Completed" << endl;
        
    }
}
