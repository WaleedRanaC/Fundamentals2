/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <sstream>
#include <iomanip>


using namespace std;

int main()
{
    double v1 = 0;
    double v2 = 0;
    double v3 = 0;
    string n1 = "";
    string n2 = "";
    string n3 = "";
    
    
    cout<<"Enter a name for player 1: ";
    getline(cin, n1);
    cout<<"Enter a name for player 2: ";
    getline(cin, n2);
    cout<<"Enter a name for player 3: ";
    getline(cin, n3);
    
    cout<<"Hello Enter a Numero 1: ";
    cin>>v1;
    cout<<"Hello Enter a Numero 2: ";
    cin>>v2;
    cout<<"Hello Enter a Numero 3: ";
    cin>>v3;

    std::cout <<"Name: "<< left<<setw(20)<<n1<<std::setprecision(3) << std::fixed << v1<<endl;
    std::cout <<"Name: "<< left<<setw(20)<<n2<<std::setprecision(3) << std::fixed << v2<<endl;
    std::cout <<"Name: "<< left<<setw(20)<<n3<<std::setprecision(3) << std::fixed << v3<<endl;
    
    
    return 0;
}



