// DLL1.cpp : Defines the exported functions for the DLL.
//

#include "framework.h"
#include "DLL1.h"
#include<iostream>
#include "../Core1/Core1.h"
#include "../Core2/Core2.h"
using namespace std;
#include <boost/locale.hpp>
using namespace boost::locale;

// This is an example of an exported variable
DLL1_API int nDLL1=0;

// This is an example of an exported function.
DLL1_API int fnDLL1(void)
{
    return 0;
}

// This is the constructor of a class that has been exported.
CDLL1::CDLL1()
{
    return;
}

namespace DynamicCrudLibrary
{
    std::string TODO:: AddTodoTask(std::string name) {
        generator gen;
        gen.add_messages_path("C:\\Users\\bhava\\OneDrive\\Desktop\\Courses\\SoftwareArchitecture\\Assignment\\Assignment\\DLL1");
        gen.add_messages_domain("dll1");

        //locale::global(gen("de_DE.UTF-8"));
        locale::global(gen(""));
        cout.imbue(std::locale());

        std::cout << translate("Currently in DLL1") << endl;

        if (CoreLibrary1::helper1 :: CheckIfExists(name)) {
            return "added task ";
        }
        return "Failed to add task";
        
    }
    std::string TODO:: RemoveTodoTask(std::string name) {
        if (CoreLibrary2::helper2::RemoveIfExists(name)) {
            return "removed task ";
        }
        return "removed task";
    }
    std::string TODO:: EmptyTodoTask(std::string name) {
        return "emptied";
    }
    
}
