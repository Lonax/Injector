
#include "LoadLibrary.h"

enum InjectionType : int
{
    
    loadLibrary
};

InjectionType InjectionMethod;
string proccessname;
string dllname;


int main(int argc, char **argv)
{
    printf("Lonax Injector press Enter to continue");
    string InjectionMethodTemp;

    getline(cin, InjectionMethodTemp);
	if (InjectionMethodTemp.empty()) InjectionMethod = loadLibrary;

    printf("Please input proccess you want inject to (press Enter for csgo.exe)\n");

    getline(cin, proccessname);
    if (proccessname.empty()) proccessname = "csgo.exe";

	if (argc == 1)
	{
		printf("Please input dll you want to inject\n");
		getline(cin, dllname);
	}
	else if (argc == 2) dllname = argv[1];
    if (dllname.empty()) dllname = "csgo.dll";

    switch (InjectionMethod)
    {
    case loadLibrary:
        load_library->loadlibrarymain(proccessname.c_str(), dllname.c_str(), argc);
        break;
    }
}

