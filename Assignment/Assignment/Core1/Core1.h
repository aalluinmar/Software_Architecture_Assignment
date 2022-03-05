// The following ifdef block is the standard way of creating macros which make exporting
// from a DLL simpler. All files within this DLL are compiled with the CORE1_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see
// CORE1_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#include<iostream>
#ifdef CORE1_EXPORTS
#define CORE1_API __declspec(dllexport)
#else
#define CORE1_API __declspec(dllimport)
#endif

// This class is exported from the dll
class CORE1_API CCore1 {
public:
	CCore1(void);
	// TODO: add your methods here.
};

extern CORE1_API int nCore1;

CORE1_API int fnCore1(void);

namespace CoreLibrary1 {
	class CORE1_API helper1 {
	public:
		static int CheckIfExists(std::string name);
		

	};
}
