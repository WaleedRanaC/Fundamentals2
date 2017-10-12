//
// Waleed Rana
// This is Lab 3, We create a Class (It was provided in the sample) and then make it bullet proof
// 10/12/2017
// In this project we ask for the population,birthrate, and the deathrate, the then show it at the end
//
#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

class Pop
{
  private:
	double population;   // Current population
	double  numBirths,    // Annual number of births
	     numDeaths;    // Annual number of deaths

  public:
	// Constructors
   Pop();                       
   Pop(double, double, double);
   
	// Mutators (i.e. "set" functions)
   void setPopulation(double p);  
   void setBirths(double b);
   void setDeaths(double d);
   
  	// Accessors
   double getPopulation()         // getPopulation is not required by specs
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
Pop::Pop(double p, double b, double d)
{
	setPopulation(p);
	setBirths(b);
	setDeaths(d);
}

/********************************************************
 *                Pop::setPopulation                    *
 * Validates and sets the population.                   *
 ********************************************************/ 
void Pop::setPopulation(double p)
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
void Pop::setBirths(double b)
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
void Pop::setDeaths(double d)
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
	double numPeople;
	double  numBirths,
		 numDeaths;

	cout << "Enter total population: "<<endl;
	cin  >> numPeople;

	while( 	cin.fail() || numPeople <= 0 || (numPeople - (int)numPeople) > 0 )//Input Validation
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
	
	while( 	cin.fail() || numBirths < 0 || (numBirths - (int)numBirths) > 0 )//Input Validation
	{
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout<<"Invalid Type / Invalid Number"<<endl;
		cout << "Enter annual number of births: "<<endl;
		cin  >> numBirths;
	}
	
	myTown.setBirths(numBirths);  
  
	cout << "Enter annual number of deaths: "<<endl;
	cin  >> numDeaths;
	
	while( 	cin.fail() || numDeaths < 0 || (numDeaths - (int)numDeaths) > 0)//Input Validation
	{
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout<<"Invalid Type / Invalid Number"<<endl;
		cout << "Enter annual number of deaths: "<<endl;
		cin  >> numDeaths;
	}
	
	myTown.setDeaths(numDeaths);
	
	
	// Display statistics for myTown

	cout << "\nPopulation Statistics  \n";         
	cout << fixed << showpoint  << setprecision(3);
	cout << "\n\tPopulation:  " << setw(7) << myTown.getPopulation();
	cout << "\n\tBirth Rate:  " << setw(7) << myTown.getBirthRate();
	cout << "\n\tDeath Rate:  " << setw(7) << myTown.getDeathRate() << endl;

	return 0;
}
