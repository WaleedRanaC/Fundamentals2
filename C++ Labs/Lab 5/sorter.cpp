#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

void print(const string& item)
{
    cout << item << endl;
}

int main()
{

	const int SIZE = 20;
	
    set<string> sortedItems;
	
	string namelist[SIZE] = 
	{ "Collins, Bill",  "Smith, Bart",  "Michalski, Joe", "Griffin, Jim",
	  "Sanchez, Manny", "Rubin, Sarah", "Taylor, Tyrone", "Johnson, Jill", 
	  "Allison, Jeff",  "Moreno, Juan", "Wolfe, Bill",    "Whitman, Jean",
	  "Moretti, Bella", "Wu, Hong",     "Patel, Renee",   "Harrison, Rose",
	  "Smith, Cathy",   "Conroy, Pat",  "Kelly, Sean",    "Holland, Beth" };
	  
	  
    for(int i = 0; i <= 19; i++)
    {
    sortedItems.insert(namelist[i]);
    }
    
	cout << "The names in sorted order are: "<<endl;
	cout << " "<<endl;
	
    for_each(sortedItems.begin(), sortedItems.end(), &print);
    
    return 0;
}


