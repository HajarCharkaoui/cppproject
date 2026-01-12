#include "Contact.hpp"

std::string Contact::getFirstname()
{
	return firstname;
}

std::string Contact::getLastname()
{
	return lastname;
}

std::string Contact::getNickname()
{
	return nickname;
}

int Contact::getPhonenumber()
{
	return phonenumber;
}

std::string Contact::getDarckestsecret()
{
	return darkestsecret;
}

void Contact::setFirstname(std::string fname)
{
	firstname = fname;
}
void Contact::setLastname(std::string lname)
{
	lastname = lname;
}
void Contact::setNickname(std::string Nname)
{
	nickname = Nname;
}
void Contact::setPhonenumber(int phone)
{
	phonenumber = phone;
}
void Contact::setdarkestsecret(std::string ds)
{
	darkestsecret = ds;
}