//
// Waleed Rana
// Base File (Project Name)
// (Date)
// (Whats in the project)
//
#include <iomanip>
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

void spoolBackorder(double stock,double order,double shiprate)
{
	//1st Part of Function
	if(order <= stock)
	{
		//summary order
		cout<<" "<<endl;
		std::cout<<"    "<<left<<setw(10)<<"Order Summary"<<left<<setw(10)<<endl;
		std::cout<<"--------------------"<<left<<setw(20)<<endl;
		std::cout<<"The Number Of Spools Ordered:  "<<std::setprecision(2)<<std::fixed<<order<<endl;
		std::cout<<"The Number Of Spools Ready To Ship: "<<std::setprecision(2)<<std::fixed<<order<<endl;
		cout<<"No items on BackOrder"<<endl;
		//Charges on Summary part
		cout<<" "<<endl;
		std::cout<<"    "<<left<<setw(10)<<"Charges"<<left<<setw(10)<<endl;
		std::cout<<"--------------------"<<left<<setw(20)<<endl;
		double sellingprice1 = (order)*(100);
		std::cout<<"Selling Price Of Items Ready to Ship: "<<"$"<<std::setprecision(2)<<std::fixed<<sellingprice1<<endl;
		double shipping1 = (order)*(shiprate);
		std::cout<<"Shipping Cost Of Items Ready to Ship: "<<"$"<<std::setprecision(2)<<std::fixed<<shipping1<<endl;
		double totalcost1 = (sellingprice1)+(shipping1);
		cout<<"Total of Order Ready to Ship: "<<"$"<<std::setprecision(2)<<std::fixed<<totalcost1<<endl;
		
	}
	else if(order > stock)
	{
		//summary order
		cout<<" "<<endl;
		std::cout<<"    "<<left<<setw(10)<<"Order Summary"<<left<<setw(10)<<endl;
		std::cout<<"--------------------"<<left<<setw(20)<<endl;
		cout<<" "<<endl;
		std::cout<<"The Number Of Spools Ordered:  "<<std::setprecision(2)<<std::fixed<<order<<endl;
		std::cout<<"The Number Of Spools Ready To Ship: "<<std::setprecision(2)<<std::fixed<<stock<<endl;
		double backorder =order-stock;
		std::cout<<"The Number Of Spools On Backorder: "<<std::setprecision(2)<<std::fixed<<backorder<<endl;
		//Charges on Summary part
		cout<<" "<<endl;
		std::cout<<"    "<<left<<setw(10)<<"Charges"<<left<<setw(10)<<endl;
		std::cout<<"--------------------"<<left<<setw(20)<<endl;
		double sellingprice2 = (stock)*(100);
		std::cout<<"Selling Price Of Items Ready to Ship: "<<"$"<<std::setprecision(2)<<std::fixed<<sellingprice2<<endl;
		double shipping2 = (stock)*(shiprate);
		std::cout<<"Shipping Cost Of Items Ready to Ship: "<<"$"<<std::setprecision(2)<<std::fixed<<shipping2<<endl;
		double totalcost2 = (sellingprice2)+(shipping2);
		std::cout<<"Total of Order Ready to Ship: "<<"$"<<std::setprecision(2)<<std::fixed<<totalcost2<<endl;
		
		
	}
	
}

void input(double &requested, double & inStock, double & ship)
{
	cout<<"Enter the number of spools you want: "<<endl;
	cin>>requested;
	while (requested <= 0)
	{
		cout<<"Invalid Entry, must be greater than 0! "<<endl;
		cout<<"Enter the number of spools you want: "<<endl;
		cin>>requested;
	}
	cout<<"Enter the number of spools in stock: "<<endl;
	cin>>inStock;
	while (inStock < 0)
	{
		cout<<"Invalid Entry, must be greater than 0! "<<endl;
		cout<<"Enter the number of spools in stock: "<<endl;
		cin>>inStock;
	}
	cout<<" "<<endl;
	cout<<" "<<endl;
	cout<<"Amount of any special shipping charges (per spool)"<<endl;
	cout<<"Above the regular $10.00 per spool rate (0 for none): "<<endl;
	cin>>ship;
	while (ship < 0)
	{
		cout<<"Amount of any special shipping charges (per spool)"<<endl;
		cout<<"Above the regular $10.00 per spool rate (0 for none): "<<endl;
		cin>>ship;
	}
	if (ship == 0)
	{
		ship = 10.0;
	}
}
int main()
{
	double shiprate = 0;
	double stockSpools = 0;
	double spoolordered = 0;
	input(spoolordered, stockSpools, shiprate);
	spoolBackorder(stockSpools,spoolordered,shiprate);
	
	return 0;
}




