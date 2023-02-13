#ifndef __CONTACT_HPP__
#define __CONTACT_HPP__
#define str std::string
#include <iostream>

class Contact {

private:
	str first_name;
	str last_name;
	str nickname;
	str phone_number;
	str darkest_secret;

public:
	Contact();
	Contact(str f_name, str l_name, str nickname, str phone, str darkest_secret);
	str get_first_name();
	str get_last_name();
	str get_nickname();
	str get_phone();
	str get_darkest_secret();
};

#endif