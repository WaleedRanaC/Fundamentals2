// Used by DivSales.cpp  

class DivSale
{
 private:
   static double totalSales;
   static double totalQuarterSales;
 public:
   double list[4];
   void division(double q1,double q2,double q3,double q4);
   void subscript(int x);
   DivSale(char div[]);
   void divPrinter(char div[]);
   void totalSalesPrinter();
   void totalQuarterPrinter();
   
};

