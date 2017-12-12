#include<iostream>
#include<iomanip>

using namespace std;

int main() {
	const int LENGTH = 15;
        char name[LENGTH];
        char date[LENGTH];
	float f;
	
	cout<<"Enter A Date xx/xx/xxxx "<<endl;
	cin.getline(date, LENGTH);
	
	cout<<"Enter a name : "<<endl;
	cin.getline(name, LENGTH);
	
	
	cout<<"Enter the Payment: "<<endl;
	cin>>f;
	
	cout<<setw(48)<<"Date: "<<date<<endl;
	cout<<"Pay to the order of: "<<setw(15)<<name<<setw(15)<<"$"<< setprecision (2) << fixed <<f<<endl;
	
   if(f > 10000)
   {
   	cout<<"You can not enter a ammount that is greater than 10000"<<endl;
   	exit(0);
   }
	
	float cents = int(f*100.0) % 100;
	
	string statement;
	
	string statementTenThousands = "";
	string statementThousands = "";
	string statementHundreds = "";
	string statementTens = "";
	string statementOnes = "";
	
    string ones[] = {"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    string tens[] = {"", "tens", "twenty", "thirty", "fourty", "fifty", "sixty", "seventy", "eighty", "ninety"};
	
	int n = int(f);		// n is now 3122
	if (n>0) {
		int ones_place = n%10;
		if (ones_place)
			statementOnes = ones[ones_place];
			
		n = n/10;		//  n is now 312
		
		int tens_place = n%10;
		if (tens_place) {
			statementTens = tens[tens_place];
			if ( (tens_place==1) && (ones_place>0) ) {
				statementOnes = "";
				switch (ones_place) {
					case 1: statementTens = "Eleven"; break;
					case 2: statementTens = "Twelve"; break;
					case 3: statementTens = "Thirteen"; break;
					case 4: statementTens = "Fourteen"; break;
					case 5: statementTens = "Fifteen"; break;
					case 6: statementTens = "Sixteen"; break;
					case 7: statementTens = "Seventeen"; break;
					case 8: statementTens = "Eighteen"; break;
					case 9: statementTens = "Nineteen"; break;
				}
			}
		}
		
		n = n/10;		//  n is now 31
		int hundreds_place = n%10;	
		if (hundreds_place)		{
			statementHundreds = ones[hundreds_place] + " hundred ";
		}
		
		n = n/10;		//  n is now 3
		int thousands_place = n%10;	
		if (thousands_place)		{
			statementThousands = ones[thousands_place] + " thousand ";
		}

		n = n/10;		//  n is now 0, but number could be up to 10,000
		
		if (n)		{
			statementThousands = "Ten Thousand ";
		}
		
		statement = statementTenThousands + statementThousands + statementHundreds
		+ statementTens +" "+ statementOnes;
	}
	cout << statement;
	if (cents>0) 
		cout << " and " << cents << " cents" << endl;
	
}
