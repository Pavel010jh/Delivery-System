#pragma once
#include <string>

using namespace std;

class Courier {
public:
	Courier(int id, const string& name, const string& phoneNumber, const string& vehicleType, bool isAvailable);

	int getId() const { return m_id; }
	string getName() const { return m_name; }
	string getPhoneNumber() const { return m_phoneNumber; }
	string getVehicleType() const { return m_vehicleType; }
	bool getIsAvailable() const { return m_isAvailable; }

private:
	int m_id;
	string m_name;
	string m_phoneNumber;
	string m_vehicleType;
	bool m_isAvailable;
};