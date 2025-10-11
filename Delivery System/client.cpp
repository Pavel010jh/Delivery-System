#include "client.h"

Client::Client(int id, const string& name, const string& phoneNumber, const string& email)
	: m_id(m_id), m_name(name), m_phoneNumber(phoneNumber), m_email(m_email) {}

void Client::addAddress(const Address& newAddress) {
	m_addresses.push_back(newAddress);
}