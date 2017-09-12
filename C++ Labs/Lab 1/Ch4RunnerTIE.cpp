// Waleed Rana
// 9/6/2017
// Lab 1
// In this lab we will be asking for 3 names and 3 race times and displaying who got first second and third place

#include<iostream>
#include<string>
using namespace std;


int main()
{
int count = 0;
string name1 = "";
string name2 = "";
string name3 = "";
double racetime1 = 0;
double racetime2 = 0;
double racetime3 = 0;

// Getting Names of Runners
cout<<"Name of Runner 1: ";
getline(cin, name1);
cout<<"Name of Runner 2: ";
getline(cin, name2);
cout<<"Name of Runner 3: ";
getline(cin, name3);
cout<<"\n";

//Getting Runners racing times



cout<<"Runner 1's Finishing Time : ";
cin>>racetime1;
cout<<"Runner 2's Finishing Time : ";
cin>>racetime2;
cout<<"Runner 3's Finishing Time : ";
cin>>racetime3;
cout<<"\n";

while (racetime1 < 0 || racetime2 < 0 || racetime3<0)
{
	
	if (count >2)
	{
		exit(0);
	}
	cout<<"All Your race times must be greater than 0"<<endl;
	cout<<"Runner 1s Finishing Time : ";
	cin>>racetime1;
	cout<<"Runner 2's Finishing Time : ";
	cin>>racetime2;
	cout<<"Runner 3's Finishing Time : ";
	cin>>racetime3;
	cout<<"\n";
	count ++;
	cout<<"Attempt Number: "<<count<<endl;
}

if (racetime1 > 0 && racetime2 > 0 && racetime3 > 0)
{
//
if (racetime1 == racetime2)
{
	if (racetime1==racetime3)
	{
		cout<<"First Place: "<<name1<<" Time : "<<racetime1<<endl;
		cout<<"First Place: "<<name2<<" Time : "<<racetime2<<endl;
		cout<<"First Place: "<<name3<<" Time : "<<racetime3<<endl;
	}
	else if (racetime1<racetime3)
	{
		cout<<"First Place: "<<name1<<" Time : "<<racetime1<<endl;
		cout<<"First Place: "<<name2<<" Time : "<<racetime2<<endl;
		cout<<"Third Place: "<<name3<<" Time : "<<racetime3<<endl;
	}
	else  if (racetime1>racetime3)
	{
		cout<<"First Place: "<<name3<<" Time : "<<racetime3<<endl;
		cout<<"Second Place: "<<name1<<" Time : "<<racetime1<<endl;
		cout<<"Second Place: "<<name2<<" Time : "<<racetime2<<endl;	
	}
}
//
else if (racetime1 == racetime3)
{
	if (racetime1==racetime2)
	{
		cout<<"First Place: "<<name1<<" Time : "<<racetime1<<endl;
		cout<<"First Place: "<<name2<<" Time : "<<racetime2<<endl;
		cout<<"First Place: "<<name3<<" Time : "<<racetime3<<endl;
	}
	else if (racetime1<racetime2)
	{
		cout<<"First Place: "<<name1<<" Time : "<<racetime1<<endl;
		cout<<"First Place: "<<name3<<" Time : "<<racetime3<<endl;
		cout<<"Third Place: "<<name2<<" Time : "<<racetime2<<endl;
	}
	else if (racetime1>racetime2)
	{
		cout<<"First Place: "<<name2<<" Time : "<<racetime2<<endl;
		cout<<"Second Place: "<<name1<<" Time : "<<racetime1<<endl;
		cout<<"Second Place: "<<name3<<" Time : "<<racetime3<<endl;
	}
}
//
else if (racetime2 == racetime3)
{
	if (racetime2==racetime1)
	{
		cout<<"First Place: "<<name1<<" Time : "<<racetime1<<endl;
		cout<<"First Place: "<<name2<<" Time : "<<racetime2<<endl;
		cout<<"First Place: "<<name3<<" Time : "<<racetime3<<endl;
	}
	else if (racetime2<racetime1)
	{
		cout<<"First Place: "<<name2<<" Time : "<<racetime2<<endl;
		cout<<"First Place: "<<name3<<" Time : "<<racetime3<<endl;
		cout<<"Third Place: "<<name1<<" Time : "<<racetime1<<endl;	

	}
	else if (racetime2>racetime1)
	{
		cout<<"First Place: "<<name1<<" Time : "<<racetime1<<endl;
		cout<<"Second Place: "<<name2<<" Time : "<<racetime2<<endl;
		cout<<"Second Place: "<<name3<<" Time : "<<racetime3<<endl;	
	}
}
//
else if (racetime1 > racetime2 && racetime1 > racetime3)
{
	if (racetime2 > racetime3)
	{
		cout<<"First Place: "<<name3<<" Time : "<<racetime3<<endl;
		cout<<"Second Place: "<<name2<<" Time : "<<racetime2<<endl;
		cout<<"Third Place: "<<name1<<" Time : "<<racetime1<<endl;
	}
	else
	{
		cout<<"First Place: "<<name2<<" Time : "<<racetime2<<endl;
		cout<<"Second Place: "<<name3<<" Time : "<<racetime3<<endl;
		cout<<"Third Place: "<<name1<<" Time : "<<racetime1<<endl;
	}
}

else if (racetime2 > racetime1 && racetime2 > racetime3)
{
	if (racetime1 > racetime3)
	{
		cout<<"First Place: "<<name3<<" Time : "<<racetime3<<endl;
		cout<<"Second Place: "<<name1<<" Time : "<<racetime1<<endl;
		cout<<"Third Place: "<<name2<<" Time : "<<racetime2<<endl;
	}
	else
	{
		cout<<"First Place: "<<name1<<" Time : "<<racetime1<<endl;
		cout<<"Second Place: "<<name3<<" Time : "<<racetime3<<endl;
		cout<<"Third Place: "<<name2<<" Time : "<<racetime2<<endl;
	}
}

else if (racetime3 > racetime2 && racetime3 > racetime1)
{
	if (racetime2 > racetime1)
	{
		cout<<"First Place: "<<name1<<" Time : "<<racetime1<<endl;
		cout<<"Second Place: "<<name2<<" Time : "<<racetime2<<endl;
		cout<<"Third Place: "<<name3<<" Time : "<<racetime3<<endl;
	}
	else
	{
		cout<<"First Place: "<<name2<<" Time : "<<racetime2<<endl;
		cout<<"Second Place: "<<name1<<" Time : "<<racetime1<<endl;
		cout<<"Third Place: "<<name3<<" Time : "<<racetime3<<endl;
	}
}

}
return 0;
}


