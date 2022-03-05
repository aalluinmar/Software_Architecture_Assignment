// BatchLibrary.cpp : Defines the exported functions for the DLL.
//

#include "framework.h"
#include "BatchLibrary.h"
#include<iostream>
using namespace std;


// This is an example of an exported variable
BATCHLIBRARY_API int nBatchLibrary=0;

// This is an example of an exported function.
BATCHLIBRARY_API int fnBatchLibrary(void)
{
    return 0;
}

// This is the constructor of a class that has been exported.
CBatchLibrary::CBatchLibrary()
{
    return;
}
int BatchLibrary::batch::Process()
{
    cout << "started batch process" << endl;
    return 1;
}
