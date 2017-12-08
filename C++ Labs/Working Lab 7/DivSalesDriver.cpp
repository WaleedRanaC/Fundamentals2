
#include <iostream>
#include <iomanip>
#include <limits>
#include <algorithm>
#include <string>
#include "DivSales.cpp" 

using namespace std;

int main()
{
  cout<<"Corporation: "<<endl;
  
  DivSale div1 ("Division 1");
  DivSale div2 ("Division 2");
//  DivSale div3 ("Division 3");
//  DivSale div4 ("Division 4");
//  DivSale div5 ("Division 5");
//  DivSale div6 ("Division 6");
  
  div1.divPrinter(" Division 1");
  div2.divPrinter(" Division 2");
//  div3.divPrinter(" Division 3");
//  div4.divPrinter(" Division 4");
//  div5.divPrinter(" Division 5");
//  div6.divPrinter(" Division 6");
  
  cout<<" "<<endl;
  
  div1.totalSalesPrinter();
  
  int x;
  cout<<" "<<endl;
  cout<<"What Division Quarterly Sales Array Would you like to see?"<<endl;
  cin>>x;
  cout<<"Here are the Quarterly Sales Array for "<<x<<endl;
  div1.subscript(x);
  div2.subscript(x);
//  div3.subscript(x);
//  div4.subscript(x);
//  div5.subscript(x);
//  div6.subscript(x);

  cout<<" "<<endl;
  div1.totalQuarterPrinter();
  cout<<" "<<endl;
  div1.totalSalesPrinter();
  
  
  return 0;
}
