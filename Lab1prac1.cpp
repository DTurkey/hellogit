#include <iostream>
#include <vector> // to use vector
using namespace std;

int main()
{
	vector <char> vcomp;
	vector <int> v2 = {10, 14, 32, 64, 16};
		
	vcomp.push_back('p'); // add new elements at the back
	v2.pop_back(); // remove last element
	
	
	vcomp.push_back('i');
	v2.pop_back();
	
	for (int i=0; i<4; i++)
	v2.push_back(0);
	
	for (int i=0; i<v2.size(); i++)
	cout << v2[i] << " ";

system("pause");
}

