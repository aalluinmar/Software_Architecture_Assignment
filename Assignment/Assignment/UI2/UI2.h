// The following ifdef block is the standard way of creating macros which make exporting
// from a DLL simpler. All files within this DLL are compiled with the UI2_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see
// UI2_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef UI2_EXPORTS
#define UI2_API __declspec(dllexport)
#else
#define UI2_API __declspec(dllimport)
#endif

// This class is exported from the dll
class UI2_API CUI2 {
public:
	CUI2(void);
	// TODO: add your methods here.
};

extern UI2_API int nUI2;

UI2_API int fnUI2(void);

namespace UILibrary2 {
	class UI2_API interface2 {
	public:
		static void animateScreen();


	};
}
