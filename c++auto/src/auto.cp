#include <iostream>
#include "../include/valueis.cp"
using namespace std;
int main() {
	auto hello1 = "Hello there!";
	string hello2 = "hello again!";
	auto number1 = 1234;
	int number2 = 5678;
	auto float1 = 12.34;
	float float2 = 23.45;
	auto bool1 = true;
	bool bool2 = false;

	valueis(hello1);
	valueis(hello2);
	valueis(number1);
	valueis(number2);
	valueis(float1);
	valueis(float2);
	valueis(bool1);
	valueis(bool2);
return 0;
}; // main end
