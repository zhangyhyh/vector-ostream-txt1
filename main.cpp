#include<iostream>
#include<fstream>
#include<string>
#include<math.h>
#include<vector>
using namespace std;
void main()
{
	vector<int> v;
	ofstream o_f;
	
	v.push_back(5);
	v.push_back(6);
	v.push_back(7);

	o_f.open("2.txt");
	vector<int>::iterator vc;

	for (vc = v.begin();vc != v.end();vc++)
	{
		o_f << *vc << " ";
	}
	
	o_f.close();
}
