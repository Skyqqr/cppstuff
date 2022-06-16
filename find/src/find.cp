#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main() {
	vector<string> words;
	words.push_back("blue");
	words.push_back("red");
	words.push_back("green");
	words.push_back("yellow");
	words.push_back("orange");
	words.push_back("purple");
	words.push_back("brown");
	vector<string>::iterator Result = find(words.begin(), words.end(), "brown");
	if (Result != words.end()) {
		cout << "Found " << *Result << endl;
	}	else {
		cout << "Value not Found!" << endl;
	};
	Result = find(words.begin(), words.end(), "black");
	if(Result != words.end()) {
		cout << "Found " << *Result << endl;
	}else {
		cout << "Value not found!" << endl;
	};

}; //main end
