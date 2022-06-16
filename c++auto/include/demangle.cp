#include <iostream>
#include <typeinfo>
#include <memory>
#include <cxxabi.h>
using namespace std;
string demangle(const char* mangled) {
	int status;
	unique_ptr<char[], void(*)(void*)> result( abi::__cxa_demangle(mangled, 0, 0, &status), free);
	return result.get() ? string(result.get()) : "Error";
};
