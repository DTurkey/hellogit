#include <vector> // to use vector
using namespace std;

int main()
{
	int loop;
	vector <char> vcomp;
	vector <int> v2={10,14,32,64,16};
	loop = getLoop();
	
	vcomp.push_back('p'); // add new elements at the back
	v2.pop_back(); // remove last element
	loop = getLoop();
	
	vcomp.push_back('k');
	v2.pop_back();
	loop = getLoop;
	
	return 0;
}

int getLoop()
{
		for (int i=0; i<v2.size(); i++)
		cout << v2[i] << " ";
}
	
	
