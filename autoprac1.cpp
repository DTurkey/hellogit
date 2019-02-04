#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector <char> vcomp;
	vector <int> v2 = { 13, 23, 34, 78, 91 };
	
	vcomp.push_back ('s');
	vcomp.push_back ('i');
	vcomp.push_back ('n');
	v2.pop_back();
	
	for (int i=0; i<2; i++)
		v2.push_back (54);
		
	for (auto v:v2)
		cout << v << " ";
		
system("pause");
}
