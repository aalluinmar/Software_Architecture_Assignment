// The following ifdef block is the standard way of creating macros which make exporting
// from a DLL simpler. All files within this DLL are compiled with the BATCHLIBRARY_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see
// BATCHLIBRARY_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef BATCHLIBRARY_EXPORTS
#define BATCHLIBRARY_API __declspec(dllexport)
#else
#define BATCHLIBRARY_API __declspec(dllimport)
#endif

// This class is exported from the dll
class BATCHLIBRARY_API CBatchLibrary {
public:
	CBatchLibrary(void);
	// TODO: add your methods here.
};

extern BATCHLIBRARY_API int nBatchLibrary;

BATCHLIBRARY_API int fnBatchLibrary(void);

namespace BatchLibrary {
	class BATCHLIBRARY_API batch {
	public:
		static int Process();


	};
}
