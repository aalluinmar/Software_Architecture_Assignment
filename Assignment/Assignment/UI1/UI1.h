// The following ifdef block is the standard way of creating macros which make exporting
// from a DLL simpler. All files within this DLL are compiled with the UI1_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see
// UI1_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef UI1_EXPORTS
#define UI1_API __declspec(dllexport)
#else
#define UI1_API __declspec(dllimport)
#endif

// This class is exported from the dll
class UI1_API CUI1 {
public:
	CUI1(void);
	// TODO: add your methods here.
};

extern UI1_API int nUI1;

UI1_API int fnUI1(void);

namespace UILibrary {
	class UI1_API interface1 {
	public:
		static void startScreen();


	};
}
