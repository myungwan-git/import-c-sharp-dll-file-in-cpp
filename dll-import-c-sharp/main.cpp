#include <iostream>
#include <Windows.h>

int main() {
	HMODULE hMod;
	/*int (*pAdd)(int, int);
	hMod = LoadLibraryA("dll-export-exam3.dll");
	std::cout << "hMod = " << hMod << std::endl;
	pAdd = (int(*)(int, int))(GetProcAddress(hMod, "Add"));
	std::cout << " > pAdd = " << pAdd << std::endl;
	std::cout << "1 + 2 = " << (*pAdd)(1,2) << std::endl;*/

	
	/*hMod = LoadLibraryA("dll-export-exam3.dll");
	std::string (*pReturnStr)(std::string);
	pReturnStr = (std::string(*)(std::string))(GetProcAddress(hMod, "returnStr"));
	std::cout << "&pReturnStr = " << pReturnStr << std::endl;
	std::cout << " > returnStr = " << (*pReturnStr)("HELLO") << std::endl;*/


	////hMod = LoadLibraryA("dll-export-exam3.dll");
	//int (*pReturnInt)();
	//pReturnInt = (int(*)())(GetProcAddress(hMod, "returnInt"));
	//std::cout << " >> returnInt = " << (*pReturnInt)() << std::endl;


	/*hMod = LoadLibraryA("dll-export-exam3.dll");
	float (*pReturnFloat)();
	pReturnFloat = (float(*)())(GetProcAddress(hMod, "returnFloat"));
	std::cout << "pReturnFloat & = " << pReturnFloat << std::endl;
	std::cout << " >> returnFloat = " << (*pReturnFloat)() << std::endl;*/

	
	hMod = LoadLibraryA("windows-form-app-dll-exam.dll");
	int (*pDllStart)();
	pDllStart = (int(*)())(GetProcAddress(hMod, "dllStart"));
	std::cout << "return int = " << (*pDllStart)() << std::endl;

	FreeLibrary(hMod);

	return 0;
}