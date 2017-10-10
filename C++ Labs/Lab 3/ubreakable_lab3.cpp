// Chapter 7 - Programming Challenge 5, Population
// This program calculates birth and death rates using
// a Population class.
#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

class Pop
{
  private:
	long population;   // Current population
	int  numBirths,    // Annual number of births
	     numDeaths;    // Annual number of deaths

  public:
	// Constructors
   Pop();                       
   Pop(long, int, int);
   
	// Mutators (i.e. "set" functions)
   void setPopulation(long p);  
   void setBirths(int b);
   void setDeaths(int d);
   
  	// Accessors
   long getPopulation()         // getPopulation is not required by specs
      { return population; };    
	double getBirthRate() 
      { return double (numBirths) / population; }
	double getDeathRate() 
      { return double (numDeaths) / population; }
};

/********************************************************
 *                     Pop::Pop                         *
 * Population class default constructor                 *
 ********************************************************/ 
Pop::Pop()
{
	population = 2;
	numBirths  = 0;
	numDeaths  = 0;
}

/********************************************************
 *                      Pop::Pop                        *
 * Population class constructor with 3 parameters       *
 ********************************************************/ 
Pop::Pop(long p, int b, int d)
{
	setPopulation(p);
	setBirths(b);
	setDeaths(d);
}

/********************************************************
 *                Pop::setPopulation                    *
 * Validates and sets the population.                   *
 ********************************************************/ 
void Pop::setPopulation(long p)
{
	if (p >= 2)
		population = p;
	else
		population = 2;       // Default value
}

/********************************************************
 *                    Pop::setBirths                    *
 * Validates and sets the annual number of births.      *
 ********************************************************/ 
void Pop::setBirths(int b)
{
	if (b >= 0)
		numBirths = b;
	else
		numBirths = 0;        // Default value
}

/********************************************************
 *                    Pop::setDeaths                    *
 * Validates and sets the annual number of deaths.      *
 ********************************************************/ 
void Pop::setDeaths(int d)
{
	if (d >= 0)
		numDeaths = d;
	else
		numDeaths = 0;        // Default value
}

//*********************** main ****************************
int main()////INPUT VALIDATION
{
	Pop  myTown;             // instantiate one Pop object
	long numPeople;
	int  numBirths,
		 numDeaths;

	cout << "Enter total population: "<<endl;
	cin  >> numPeople;

	while( 	cin.fail() || numPeople < 0 )
	{
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout<<"Invalid Type / Invalid Number"<<endl;
		cout << "Enter total population: "<<endl;
		cin>>numPeople;
	}
	
	myTown.setPopulation(numPeople);  

	cout << "Enter annual number of births: "<<endl;
	cin  >> numBirths;
	
//	while (numBirths < 0)
//	{	cout << "Value cannot be negative.  Please re-enter: ";
//		cin  >> numBirths;
//	} 
	
	myTown.setBirths(numBirths);  
  
	cout << "Enter annual number of deaths: "<<endl;
	cin  >> numDeaths;
//	
//	while (numDeaths < 0)
//	{	cout << "Value cannot be negative.  Please re-enter: ";
//		cin  >> numDeaths;
//	}
	
	myTown.setDeaths(numDeaths);

	// Display statistics for myTown
	cout << "\nPopulation Statistics  \n";         
	cout << fixed << showpoint  << setprecision(3);
	cout << "\n\tPopulation:  " << setw(7) << myTown.getPopulation();
	cout << "\n\tBirth Rate:  " << setw(7) << myTown.getBirthRate();
	cout << "\n\tDeath Rate:  " << setw(7) << myTown.getDeathRate() << endl;

	return 0;
}
