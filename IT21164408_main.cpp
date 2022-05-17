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

class Subscription //creating Subscription class
{
  private:
    Payment * payment; //composition relationship with Payment class
    string subscription_type, subscription_status; //declare variables

  public:
    Subscription() ; //default constructor
    void addSubscription() ; //define functions
    void deleteSubscription() ;
    void displayDetails() ;
    ~Subscription(); //default destructor
};

Payment :: Payment() //default constructor of Payment class
{
	paymentID = 0; 
  payment_date = "Not Entered"; 
  payment_desc = "Not Entered";
  amount = 0;
}

void Payment :: displayDetails() 
{
  cout << "Payment ID  : " << paymentID << endl;
  cout << "Date        : " << payment_date << endl;
  cout << "Description : " << payment_desc << endl;
  cout << "Amount      : " << amount << endl;
}

Payment :: ~Payment() //default destructor of Payment class
{
  cout << "Deleting payment " << paymentID << endl;
}

Subscription :: Subscription() //default constructor of Subscription class
{
	payment = new Payment; 
	subscription_type = "Not Entered"; 
	subscription_status = "Not Entered";
}

void Subscription :: displayDetails() 
{
  cout << "Subscription type   : " << subscription_type << endl;
  cout << "Subscription status : " << subscription_status << endl;
}

Subscription :: ~Subscription() //default destructor of Subscription class
{
  cout << "Deleting subscription" << endl;
	delete payment; 
}

int main() 
{
	Subscription subscription1; //create objects for Subscription class
	Payment payment1; //create objects for Payment class

	payment1.displayDetails();
  subscription1.displayDetails();
	
	return 0;
}