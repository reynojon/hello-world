#include <iostream>
#include <strong>

using std::cin;
using std::cout;
using std::string;

int main()
{
	string name;
	cout << "What is your Name?";
	getline(cin, name);
	cout << "Hello " << name << "!\n";
	return 0;
}
