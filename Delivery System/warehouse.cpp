#include "warehouse.h"

Warehouse::Warehouse(int id, const Address& address, const string& phoneNumber)
	: m_id(id), m_address(address), m_phoneNumber(phoneNumber) {}
