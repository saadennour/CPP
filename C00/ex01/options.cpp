#include "phonebook.hpp"

int	empty_fields(Contact contact)
{
	if (contact.firstname.length() == 0 || contact.lastname.length() == 0
		|| contact.nickname.length() == 0 || contact.phonenumber.length() == 0
		|| contact.darkest_secret.length() == 0)
		return (0);
	return (1);
}

void	init_contact(PhoneBook *contacts, int i)
{
	contacts->contact[i].firstname = "";
	contacts->contact[i].lastname = "";
	contacts->contact[i].nickname = "";
	contacts->contact[i].phonenumber = "";
	contacts->contact[i].darkest_secret = "";
}

void	ft_putstr(std::string str)
{
	int	i;

	i = 0;
	while (str[i] && i < 9)
	{
		std::cout << str[i];
		i++;
	}
	if (str[i] && i == 9)
		std::cout << ".";
}

void	add(PhoneBook *contacts)
{
	static int  i;
	std::string num;

	if (i == 8)
		i = 0;
	std::cout << "Enter the first name : ";
	getline(std::cin, contacts->contact[i].firstname);
	std::cout << "Enter the last name : ";
	getline(std::cin, contacts->contact[i].lastname);
	std::cout << "Enter the nickname : ";
	getline(std::cin, contacts->contact[i].nickname);
	std::cout << "Enter the phone number : ";
	getline(std::cin, contacts->contact[i].phonenumber);
	std::cout << "Enter the darkest secret : ";
	getline(std::cin, contacts->contact[i].darkest_secret);
	if (empty_fields(contacts->contact[i]) == 0)
	{
		std::cout << "You have entered an empty field, try again !\n";
		init_contact(contacts, i);
		return ;
	}
	i++;
}

void	search(PhoneBook *contacts)
{
	int	index;
	std::string	str;

	std::cout << "Which contact you want to display : ";
	getline(std::cin, str);
	index = ft_stoi(str);
	std::cout << index << "\n";
	if (index > 7 || index < 0)
	{
		std::cout << "The contact you choosed is not available\n";
		return ;
	}
	std::cout << index << " | ";
	ft_putstr(contacts->contact[index].firstname);
	std::cout << " | ";
	ft_putstr(contacts->contact[index].lastname);
	std::cout << " | ";
	ft_putstr(contacts->contact[index].nickname);
	std::cout << "\n";
}