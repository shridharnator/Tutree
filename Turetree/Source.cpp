#include"pattern.h"
#include"checkstring.h"

int main(void)
{
	Pattern obj;
	obj.pat();
	cout << "\n";
	stringchecker g;
	string str;
	string mega;
	cout << "Enter String" << "\n";
	cin >> mega;
	cout << "enter substring" << "\n";
	cin >> str;
	int n = str.size();
	g.permute(str, 0, n - 1, mega);
	
	
	return 0;
}