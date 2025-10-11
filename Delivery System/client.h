#pragma once
#include <string>
#include <vector>
#include "address.h"
using namespace std;

class Client {
public:
	Client(int id, const string& name, const string& phoneNumber, const string& email);

	void addAddress(const Address& newAddress);
	
	int getId() const { return m_id; }
	string detName() const { return m_name; }
	string getPhoneNumber() const { return m_phoneNumber; }
	string getEmail() const { return m_email; }

private:
	int m_id;
	string m_name;
	string m_phoneNumber;
	string m_email;
	vector<Address> m_addresses;
};
