//IT21164408_Warunika H P R_MLB_08.01_05

#include <iostream>
#include <string>
#include "Payment.h"
#include "Subscription.h"
using namespace std;

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