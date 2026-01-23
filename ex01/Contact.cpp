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

std::string Contact::getPhonenumber()
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

bool isnumeric(std::string str)
{
	for (size_t i = 0; i < str.length(); i++)
	{
		if (!isdigit(str[i]))
			return false;
	}
	return true;
}
void Contact::setPhonenumber(std::string phone)
{
	if (phone.length() == 0)
		std::cout << "empty fieled!"<< std::endl;
	else if (!isnumeric(phone))
		std::cout << "Invalid phone number"<< std::endl;
	phonenumber = phone;
}
void Contact::setdarkestsecret(std::string ds)
{
	darkestsecret = ds;
}