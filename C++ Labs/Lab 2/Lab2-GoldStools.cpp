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

void spoolBackorder(double stock,double order,double shiprate,double gOrder,double stockgold)
{
	//1st Part of Function
	if(order <= stock)
	{
		if(gOrder <= stockgold)
		{
		cout<<" "<<endl;
		std::cout<<"    "<<left<<setw(10)<<"Order Summary"<<left<<setw(10)<<endl;
		std::cout<<"--------------------"<<left<<setw(20)<<endl;
		std::cout<<"The Number Of Brown Spools Ordered:  "<<std::setprecision(2)<<std::fixed<<order<<endl;
		std::cout<<"The Number Of Brown Spools Ready To Ship: "<<std::setprecision(2)<<std::fixed<<order<<endl;
		std::cout<<"The Number Of Gold Spools Ordered:  "<<std::setprecision(2)<<std::fixed<<gOrder<<endl;
		std::cout<<"The Number Of Gold Spools Ready To Ship: "<<std::setprecision(2)<<std::fixed<<gOrder<<endl;
		cout<<"No items on BackOrder"<<endl;
		//Charges on Summary part
		cout<<" "<<endl;
		std::cout<<"    "<<left<<setw(10)<<"Charges"<<left<<setw(10)<<endl;
		std::cout<<"--------------------"<<left<<setw(20)<<endl;
		double gsellingprice1 = (gOrder)*(200);
		double sellingprice1 = (order)*(100);
		std::cout<<"Selling Price Of Gold Spools Ready to Ship: "<<"$"<<std::setprecision(2)<<std::fixed<<gsellingprice1<<endl;
		std::cout<<"Selling Price Of Brown Spools Ready to Ship: "<<"$"<<std::setprecision(2)<<std::fixed<<sellingprice1<<endl;
		double shipping1 = (order)*(shiprate);
		std::cout<<"Shipping Cost Of Brown Spools Ready to Ship: "<<"$"<<std::setprecision(2)<<std::fixed<<shipping1<<endl;
		double totalcost1 = (sellingprice1)+(shipping1)+(gsellingprice1);
		cout<<"Total of Order Ready to Ship: "<<"$"<<std::setprecision(2)<<std::fixed<<totalcost1<<endl;
		}
		else if(gOrder > stockgold)
		{
		cout<<" "<<endl;
		std::cout<<"    "<<left<<setw(10)<<"Order Summary"<<left<<setw(10)<<endl;
		std::cout<<"--------------------"<<left<<setw(20)<<endl;
		std::cout<<"The Number Of Brown Spools Ordered:  "<<std::setprecision(2)<<std::fixed<<order<<endl;
		std::cout<<"The Number Of Brown Spools Ready To Ship: "<<std::setprecision(2)<<std::fixed<<order<<endl;
		std::cout<<"The Number Of Gold Spools Ordered:  "<<std::setprecision(2)<<std::fixed<<gOrder<<endl;
		std::cout<<"The Number Of Gold Spools Ready To Ship: "<<std::setprecision(2)<<std::fixed<<stockgold<<endl;
		cout<<"No Brown Spools on BackOrder"<<endl;
		double gbackorder =gOrder-stockgold;
		std::cout<<"The Number Of Brown Spools On Backorder: "<<std::setprecision(2)<<std::fixed<<gbackorder<<endl;
		/////////IIII WASSS SRIGHTTT HEREEEEEEEE??????????
		//Charges on Summary part
		cout<<" "<<endl;
		std::cout<<"    "<<left<<setw(10)<<"Charges"<<left<<setw(10)<<endl;
		std::cout<<"--------------------"<<left<<setw(20)<<endl;
		double gsellingprice1 = (gOrder)*(200);
		double sellingprice1 = (order)*(100);
		std::cout<<"Selling Price Of Gold Spools Ready to Ship: "<<"$"<<std::setprecision(2)<<std::fixed<<gsellingprice1<<endl;
		std::cout<<"Selling Price Of Brown Spools Ready to Ship: "<<"$"<<std::setprecision(2)<<std::fixed<<sellingprice1<<endl;
		double shipping1 = (order)*(shiprate);
		std::cout<<"Shipping Cost Of Brown Spools Ready to Ship: "<<"$"<<std::setprecision(2)<<std::fixed<<shipping1<<endl;
		double totalcost1 = (sellingprice1)+(shipping1)+(gsellingprice1);
		cout<<"Total of Order Ready to Ship: "<<"$"<<std::setprecision(2)<<std::fixed<<totalcost1<<endl;
		}
		
	}
	else if(order > stock)
	{
		//summary order
		cout<<" "<<endl;
		std::cout<<"    "<<left<<setw(10)<<"Order Summary"<<left<<setw(10)<<endl;
		std::cout<<"--------------------"<<left<<setw(20)<<endl;
		cout<<" "<<endl;
		std::cout<<"The Number Of Brown Spools Ordered:  "<<std::setprecision(2)<<std::fixed<<order<<endl;
		std::cout<<"The Number Of Brown Spools Ready To Ship: "<<std::setprecision(2)<<std::fixed<<stock<<endl;
		double backorder =order-stock;
		std::cout<<"The Number Of Brown Spools On Backorder: "<<std::setprecision(2)<<std::fixed<<backorder<<endl;
		//Charges on Brown Summary part
		cout<<" "<<endl;
		std::cout<<"    "<<left<<setw(10)<<"Brown Charges"<<left<<setw(10)<<endl;
		std::cout<<"--------------------"<<left<<setw(20)<<endl;
		double sellingprice2 = (stock)*(100);
		std::cout<<"Selling Price Of Brown Spools Ready to Ship: "<<"$"<<std::setprecision(2)<<std::fixed<<sellingprice2<<endl;
		double shipping2 = (stock)*(shiprate);
		std::cout<<"Shipping Cost Of Brown Spools Ready to Ship: "<<"$"<<std::setprecision(2)<<std::fixed<<shipping2<<endl;
		double totalcost2 = (sellingprice2)+(shipping2);
		std::cout<<"Total of Order Ready to Ship: "<<"$"<<std::setprecision(2)<<std::fixed<<totalcost2<<endl;
		
	}
	
}

void input(double &requested,double &gspools,double & gstock double & inStock, double & ship)
{
	cout<<"Enter the number of Brown spools you want (100 each): "<<endl;
	cin>>requested;
	while (requested <= 0)
	{
		cout<<"Invalid Entry, must be greater than 0! "<<endl;
		cout<<"Enter the number of Brown spools you want (100 each): "<<endl;
		cin>>requested;
	}
	cout<<"Enter the number of Gold spools you want (200 each): "<<endl;
	cin>>gspools;
	while (gspools <= 0)
	{
		cout<<"Invalid Entry, must be greater than 0! "<<endl;
		cout<<"Enter the number of Gold spools you want (200 each): "<<endl;
		cin>>gspools;
	}
	cout<<"Enter the number of spools in stock: "<<endl;
	cin>>inStock;
	while (inStock < 0)
	{
		cout<<"Invalid Entry, must be greater than 0! "<<endl;
		cout<<"Enter the number of spools in stock: "<<endl;
		cin>>inStock;
	}
	cout<<"Enter the number of gold spools in stock: "<<endl;
	cin>>gstock;
	while (gstock < 0)
	{
		cout<<"Invalid Entry, must be greater than 0! "<<endl;
		cout<<"Enter the number of gold spools in stock: "<<endl;
		cin>>gstock;
	}
	//
	//
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
	double stockgold = 0;
	double goldspools = 0;
	double shiprate = 0;
	double stockSpools = 0;
	double spoolordered = 0;
	input(spoolordered, goldspools, stockgold, stockSpools, shiprate);
	spoolBackorder(stockSpools,spoolordered,shiprate);
	
	return 0;
}
