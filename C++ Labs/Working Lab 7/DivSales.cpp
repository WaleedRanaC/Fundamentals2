#include "DivSales.h"
#include <iostream>
using namespace std; 


//The definition of the static memeber function
double DivSale::totalSales = 0;
double DivSale::totalQuarterSales = 0;

//*****************************************
//set value of object.                    *
//*****************************************
void DivSale::division(double q1,double q2,double q3,double q4)
{
 list[0] += q1;
 list[1] += q2;
 list[2] += q3;
 list[3] += q4;
 totalSales += q1+q2+q3+q4;
} 

void DivSale::subscript(int x)
{
	cout<<list[x-1]<<endl;
	totalQuarterSales += list[x-1];
	
}

DivSale::DivSale(char div[])
{
  double values[4];
  //loop that gets values
  cout<<" "<<endl;
  cout<<"Enter sales data for "<<div<<endl;
  for (int count = 1; count < 5; count++)
  {
	cout<<"Quarter "<<count<<":";
	cin>>values[count-1];
  }
  
  division(values[0],values[1],values[2],values[3]);
}

void DivSale::divPrinter(char div[])
{
  cout<<" "<<endl;
  cout<<"Sales Data For"<<div<<endl;
  for (int count = 1; count < 5; count++)
  {
	cout<<"Quarter "<<count<<": $ "<<list[count-1]<<endl;
  }
  
}

void DivSale::totalSalesPrinter()
{
	cout<<"The Total Sales are $"<<DivSale::totalSales<<endl;
}

void DivSale::totalQuarterPrinter()
{
	cout<<"The Total Quarter Sales are $"<<DivSale::totalQuarterSales<<endl;
}

