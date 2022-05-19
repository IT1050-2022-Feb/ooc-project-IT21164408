//IT21164408_Warunika H P R_MLB_08.01_05

#include <iostream>
#include <string>
#include "Payment.h"
#include "Subscription.h"
using namespace std;

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