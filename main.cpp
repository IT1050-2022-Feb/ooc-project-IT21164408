//IT21164408_Warunika H P R_MLB_08.01_05

#include <iostream>
#include <string>
#include "Payment.h"
#include "Subscription.h"
using namespace std;

int main() 
{
	Subscription subscription1; //create objects for Subscription class
	Payment payment1; //create objects for Payment class

	payment1.displayDetails();
  subscription1.displayDetails();
	
	return 0;
}