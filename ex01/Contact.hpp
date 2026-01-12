#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>

class Contact{
	private:
		std::string firstname;
		std::string lastname;
		std::string nickname;
		int		phonenumber;
		std::string darkestsecret;
	public:
		std::string getFirstname();
		std::string getLastname();
		std::string getNickname();
		int getPhonenumber();
		std::string getDarckestsecret();
	
		void setFirstname(std::string fname);
		void setLastname(std::string lname);
		void setNickname(std::string Nname);
		void setPhonenumber(int phone);
		void setdarkestsecret(std::string ds);
};
#endif