//
// Waleed Rana
// Base File (Project Name)
// (Date)
// (Whats in the project)
//

#include<iostream>
#include<string>

using namespace std;
//int spoolAsker(int &);

void spoolBackorder(double stock,double order)
{
	//1st Part of Function
	if(order <= stock)
	{
		cout<<" "<<endl;
		cout<<"The Number Of Spools Ready To Ship: "<<order<<endl;
		cout<<"No items on BackOrder"<<endl;
		double sellingprice1 = (order)*(100);
		cout<<"Selling Price Of Items Ready to Ship: "<<"$"<<sellingprice1<<endl;
		double shipping1 = (order)*(10);
		cout<<"Shipping Cost Of Items Ready to Ship: "<<"$"<<shipping1<<endl;
		double totalcost1 = (sellingprice1)+(shipping1);
		cout<<"Total of Order Ready to Ship: "<<"$"<<totalcost1<<endl;
		
	}
	else if(order > stock)
	{
		cout<<" "<<endl;
		cout<<"The Number Of Spools Ready To Ship: "<<stock<<endl;
		double backorder =order-stock;
		cout<<"The Number Of Spools On Backorder: "<<backorder<<endl;
		double sellingprice2 = (stock)*(100);
		cout<<"Selling Price Of Items Ready to Ship: "<<"$"<<sellingprice2<<endl;
		double shipping2 = (stock)*(10);
		cout<<"Shipping Cost Of Items Ready to Ship: "<<"$"<<shipping2<<endl;
		double totalcost2 = (sellingprice2)+(shipping2);
		cout<<"Total of Order Ready to Ship: "<<"$"<<totalcost2<<endl;
		
		
	}
	
}

void input(double &requested, double & inStock)
{
	cout<<"Enter the number of spools you want"<<endl;
	cin>>requested;
	while (requested <= 0)
	{
		cout<<"Invalid Entry, must be greater than 0! "<<endl;
		cout<<"Enter the number of spools you want: "<<endl;
		cin>>requested;
	}
	cout<<"Enter the number of spools in stock"<<endl;
	cin>>inStock;
	while (inStock < 0)
	{
		cout<<"Invalid Entry, must be greater than 0! "<<endl;
		cout<<"Enter the number of spools in stock: "<<endl;
		cin>>requested;
	}
	cout<<"No Special Shipping and Handling Costs"<<endl;
	
}
int main()
{
	double stockSpools = 0;
	double spoolordered = 0;
	input(spoolordered, stockSpools);
	spoolBackorder(stockSpools,spoolordered);
	
	return 0;
}




