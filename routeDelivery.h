#pragma once
#include <iostream>
#include <string>
#include <vector> //possibly take out or keep

using namespace std; 

//structure
struct Customer { //for customer name and coordinates
	string name; 
	int x; 
	int y; 
};

//class
class routeDelivery {
private:
	int depotX; //x coordinate
	int depotY; //y coordinate
	int customerCount; 
	                 // might have to include a vector here
	 //private member functions for entering console and checking if coordinates are real (bool, if)
	void enterConsole(); 
	bool coordinates(int x, int y); 

public:
	//constructor
	routeDelivery(); //calling this when the object ( depotX, depotY, customer) are created

	//destructor
	routeDelivery(); //not really sure how destructors work except for destroying

	//getters
	int depotX();    //can also write as "int getDepotX():" Makes more sense now
	int depotY();    //int getDepotY();
	int customerCount();  //int getCustomerCount(): 
	//setters
	void Depot(int x, int y); //can also write as "void setDepot(int x, int y)
};




