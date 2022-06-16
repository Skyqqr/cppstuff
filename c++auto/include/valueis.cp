#include <iostream>
#include <typeinfo>
#include "demangle.cp"
using namespace std;

void valueis(auto value) {
	cout << value << " Is of The " << demangle(typeid(value).name()) << " type." << endl;
};
