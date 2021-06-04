//============================================================================
// Name        : newstuff.cpp
// Author      : Fasih Atiq
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
#include "PersonData.hpp"
#include "CustomerData.hpp"
using namespace std;

int main(){

	CustomerData customer;
	string nameFirst,
		   nameLast,
		   address,
		   city,
		   mailingList;
	int phone;

	cout << "Enter the customer's Last name.\n";
	getline(cin,nameLast);
	customer.setLastName(nameLast);
	cout << "Enter the customer's First name.\n";
	getline(cin,nameFirst);
	customer.setFirstName(nameFirst);
	cout << "Enter the customer's address.\n";
	getline(cin,address);
	customer.setAddress(address);
	cout << "Enter the customer's city.\n";
	getline(cin,city);
	customer.setCity(city);
	cout << "Enter the customer's phone number.\n";
	cin >> phone;
	customer.setPhone(phone);
	customer.setCustomerNum(40);

	cout <<"Add customer to the mailing list? enter Y for yes or N for no\n";
	cin >> mailingList;

	if(mailingList == "Y"){

		customer.setMailinglist(true);

	}
	else{

		customer.setMailinglist(false);


	}

	cout << "Customer's First name is: " << customer.getFirstName() << "\n";
	cout << "Customer's Last name is: " << customer.getLastName() << "\n";
	cout << "Customer's address is: " << customer.getAddress() << "\n";
	cout << "Customer's city is: " << customer.getCity() << "\n";
	cout << "Customer's phone # is: " << customer.getPhone() << "\n";
	cout << "Customer's account # is: " << customer.getCustomerNum() << "\n";
	cout << "Added to Mailing List? " << "\n";

	if(customer.getMailinglist()){

		cout << "Yes\n";

	}
	else {

		cout << "No\n";
	}

	cout << "Program has ended, have a nice day! \n";

	return 0;

}
