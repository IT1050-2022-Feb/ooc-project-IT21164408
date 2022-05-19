//IT21164408_Warunika H P R_MLB_08.01_05

#include <iostream>
#include <string>
using namespace std;

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