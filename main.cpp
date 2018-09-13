#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector <Data> v;
	
	v.push_back({7,21.01});
	
	Dat d;
	v.push_back(d);
	d.setX(10);
	d.setY(12.10);
	v.push_back(d);
	
	for(int i=0; i<v.size(); i++)
		{
			cout<< v[i].getX()<<" ";
			cout<< v[i].getY()<<endl;
		}
		
	
	}
