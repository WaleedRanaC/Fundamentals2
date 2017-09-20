//
// Waleed Rana
// Base File (Project Name)
// (Date)
// (Whats in the project)
//

#include<iostream>
#include<string>

using namespace std;
void spoolAsker();
void spoolBackorder();

int main()
{
	spoolAsker();
	spoolBackorder();
	return 0;
}

void spoolAsker()
{
	int stockStools = 200;
	//First part of function
	double stool = 0;
	cout<<"Enter the amount of spools you would like to buy: "<<endl;
	cin>>stool;
	while (stool <= 0)
	{
		if(stool <= 0)
		{
			cout<<"Invalid Entry, must be greater than 0! "<<endl;
			cout<<"Enter the amount of spools you would like to buy: "<<endl;
			cin>>stool;
		}
	}
	cout<<"Number of Stools Ordered: "<<stool<<endl;
	cout<<"Number of Stools in Stock: "<<stockStools<<endl;
	//Second Part of Function
	
}

void spoolBackorder()
{
	cout<<"This is a test boi"<<endl;
}
