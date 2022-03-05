// UI1.cpp : Defines the exported functions for the DLL.
//

#include "framework.h"
#include "UI1.h"
#include<iostream>
#include "../DLL1/DLL1.h"
#include "../Core3/Core3.h"

using namespace std;
#include <boost/locale.hpp>
using namespace boost::locale;



// This is an example of an exported variable
UI1_API int nUI1=0;

// This is an example of an exported function.
UI1_API int fnUI1(void)
{
    return 0;
}

// This is the constructor of a class that has been exported.
CUI1::CUI1()
{
    return;
}

void UILibrary::interface1::startScreen()
{
    if (CoreLibrary3::helper3::CheckIfScreenExixts()) {
        generator gen;
        gen.add_messages_path("C:\\Users\\bhava\\OneDrive\\Desktop\\Courses\\SoftwareArchitecture\\Assignment\\Assignment\\UI1");
        gen.add_messages_domain("UI1");

        //locale::global(gen("de_DE.UTF-8"));
        locale::global(gen(""));
        cout.imbue(std::locale());

        std::cout << translate("Started screen") << endl;
        std::cout << DynamicCrudLibrary::TODO::AddTodoTask("eat") << std::endl;
        std::cout << DynamicCrudLibrary::TODO::RemoveTodoTask("eat") << std::endl;
        std::cout << DynamicCrudLibrary::TODO::EmptyTodoTask("eat") << std::endl;
    }
    
}

