// The following ifdef block is the standard way of creating macros which make exporting
// from a DLL simpler. All files within this DLL are compiled with the DLL1_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see
// DLL1_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#include<iostream>
#ifdef DLL1_EXPORTS
#define DLL1_API __declspec(dllexport)
#else
#define DLL1_API __declspec(dllimport)
#endif

// This class is exported from the dll
class DLL1_API CDLL1 {
public:
	CDLL1(void);
	// TODO: add your methods here.
};

extern DLL1_API int nDLL1;

DLL1_API int fnDLL1(void);

namespace DynamicCrudLibrary {
	class DLL1_API TODO {
	public:
		static std::string AddTodoTask(std::string name);
		static std::string RemoveTodoTask(std::string name);
		static std::string EmptyTodoTask(std::string name);

	};
}
