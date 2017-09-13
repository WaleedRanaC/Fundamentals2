// Waleed Rana
// 9/6/2017
// Lab 1
// In this lab we will be asking for 3 names and 3 race times and displaying who got first second and third place

#include<iostream>
#include<string>
using namespace std;

//Function Prototypes
void sortArray(int [], int);
void showArray(const int [], int);


int main()
{
const int SIZE = 3;

//Empty Array
int values[SIZE];

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
cin>> values[0];
cout<<"Runner 2's Finishing Time : ";
cin>>values[1];
cout<<"Runner 3's Finishing Time : ";
cin>>values[2];
cout<<"\n";


while (racetime1 < 0 || racetime2 < 0 || racetime3<0)
{
	
	if (count >2)
	{
		exit(0);
	}
	cout<<"All Your race times must be greater than 0"<<endl;
	cout<<"Runner 1s Finishing Time : ";
	cin>>values[0];
	cout<<"Runner 2's Finishing Time : ";
	cin>>values[1];
	cout<<"Runner 3's Finishing Time : ";
	cin>>values[2];
	cout<<"\n";
	count ++;
	cout<<"Attempt Number: "<<count<<endl;
}
//Before Sort
cout<<"the unsorted values are:"<<endl;
showArray(values, SIZE);

//After the Sort
sortArray(values, SIZE);

//Display the sorted
cout << "The sorted values are:"<<endl;
showArray(values, SIZE);


return 0;
}


/*SORTING THE ARRAY PART
-In this part we will be using a bubble sort
-the paramter holds the ammount of items in the array which is 2
*/

void sortArray(int array[], int size)
{
	int temp;
	bool madeAswap;
	
	do
	{ 
	madeAswap=false;
	for (int count = 0; count < (size -1); count++)
	{
		if (array[count]>array[count + 1])
		{
			temp = array[count];
			array[count] = array[count+1];
			array[count + 1] = temp;
			madeAswap = true;
			
		}
	}
	} while (madeAswap); // Loop again uf a swap occured on this pass
}

/*
-This function displays the contents 
*/

void showArray(const int array[], int size)
{
	for (int count = 0; count < size; count++)
		cout << array[count] << " ";
	cout << endl;
}
