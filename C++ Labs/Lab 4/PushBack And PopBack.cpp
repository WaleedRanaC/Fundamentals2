#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> vectorOne(4, 1); //vectorOne is now {1,1,1,1}
	
	
	for(int i = 0; i < vectorOne.size(); i++)
	{
		cout<<"Element"<<i<<":"<< vectorOne.at(i) << endl;
		
	}
	cout << "\n";
	vectorOne.push_back(2); //vectorOne is now {1,1,1,1,2}
	
	for(int i = 0; i < vectorOne.size(); i++)
	{
		cout<<"Element"<<i<<":"<< vectorOne.at(i) << endl;
		
	}
	cout << "\n";
	vectorOne.push_back(3); //vectorOne is now {1,1,1,1,2,3}
	
	for(int i = 0; i < vectorOne.size(); i++)
	{
		cout<<"Element"<<i<<":"<< vectorOne.at(i) << endl;
		
	}
	cout << "\n";
	
	vectorOne.pop_back(); ////vectorOne is now {1,1,1,1,2}
	for(int i = 0; i < vectorOne.size(); i++)
	{
		cout<<"Element"<<i<<":"<< vectorOne.at(i) << endl;
		
	}
	cout << "\n";
	
	return 0;
}
