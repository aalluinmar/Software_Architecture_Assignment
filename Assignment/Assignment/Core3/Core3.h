// The following ifdef block is the standard way of creating macros which make exporting
// from a DLL simpler. All files within this DLL are compiled with the CORE3_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see
// CORE3_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef CORE3_EXPORTS
#define CORE3_API __declspec(dllexport)
#else
#define CORE3_API __declspec(dllimport)
#endif

// This class is exported from the dll
class CORE3_API CCore3 {
public:
	CCore3(void);
	// TODO: add your methods here.
};

extern CORE3_API int nCore3;

CORE3_API int fnCore3(void);

namespace CoreLibrary3 {
	class CORE3_API helper3 {
	public:
		static int CheckIfScreenExixts();
		static int CheckIfAnimationCompleted();
	};
}
