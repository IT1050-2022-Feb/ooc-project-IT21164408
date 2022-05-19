//IT21164408_Warunika H P R_MLB_08.01_05

#include <iostream>
#include <string>
using namespace std;

class Payment //creating Payment class
{
  private:
    int paymentID, cardNo; //declare variables
    float amount;
    string payment_desc, payment_date;

  public:
    Payment() ;//default constructor 
    void addPayment() ; //define functions
    void editPayment() ;
    void deletePayment() ;
    void validatePayment() ;
    void displayDetails() ;
    ~Payment() ; //default destructor
};