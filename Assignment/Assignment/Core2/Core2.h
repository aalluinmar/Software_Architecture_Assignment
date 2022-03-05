// The following ifdef block is the standard way of creating macros which make exporting
// from a DLL simpler. All files within this DLL are compiled with the CORE2_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see
// CORE2_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#include<iostream>
#ifdef CORE2_EXPORTS
#define CORE2_API __declspec(dllexport)
#else
#define CORE2_API __declspec(dllimport)
#endif

// This class is exported from the dll
class CORE2_API CCore2 {
public:
	CCore2(void);
	// TODO: add your methods here.
};

extern CORE2_API int nCore2;

CORE2_API int fnCore2(void);

namespace CoreLibrary2 {
	class CORE2_API helper2 {
	public:
		static int RemoveIfExists(std::string name);
		static int CheckForStarsAnimation();


	};
}
