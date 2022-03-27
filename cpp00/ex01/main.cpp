#include "main.h"

void	ft_banner()
{
	std::cout << "PPPPP   H    H  OOOOOO  N    N  EEEEEE    BBBBB   OOOOOO  OOOOOO  K    K" << std::endl;
	std::cout << "P    P  H    H  O    O  NN   N  E         B    B  O    O  O    O  K   K " << std::endl;
	std::cout << "P    P  H    H  O    O  N N  N  E         B    B  O    O  O    O  K  K  " << std::endl;
	std::cout << "PPPPP   HHHHHH  O    O  N  N N  EEEEEE    BBBBB   O    O  O    O  K K   " << std::endl;
	std::cout << "P       H    H  O    O  N  N N  E         B    B  O    O  O    O  K  K  " << std::endl;
	std::cout << "P       H    H  O    O  N   NN  E         B    B  O    O  O    O  K   K " << std::endl;
	std::cout << "P       H    H  OOOOOO  N    N  EEEEEE    BBBBB   OOOOOO  OOOOOO  K    K" << std::endl;
	std::cout << std::endl << "Please use ADD, SEARCH or EXIT" << std::endl;
}

Contact	get_info()
{
	std::string buff;
	Contact		tmp;
	
	std::getline(std::cin, buff);
	std::cout << "Lastname : ";
    std::getline(std::cin, buff);
	tmp.set_lname(buff);
    std::cout << "Firstname : ";
	std::getline(std::cin, buff);
	tmp.set_fname(buff);
	std::cout << "Nickname : ";
	std::getline(std::cin, buff);
	tmp.set_nname(buff);
    std::cout << "Number : ";
	std::getline(std::cin, buff);
	tmp.set_nb(buff);
    std::cout << "Darkest Secret : ";
    std::getline(std::cin, buff);
	tmp.set_sec(buff);
	return (tmp);
}

void	ft_search(int i, PhoneBook book)
{
	int index;
	std::string	buff;

	index = 0;
	std::cout << std::setw(11) << "INDEX|" << std::setw(11) << "LASTNAME|" 
	<< std::setw(11) << "FIRSTNAME|" << std::setw(11) << "NICKNAME|" << std::endl << std::endl;
	while (index < i)
	{
		book.search((index + 1), book.get_contact(index));
		index++;
	}
	std::getline(std::cin, buff);
	std::cout << "Please enter an index between 1 and " << i << std::endl;
	std::getline(std::cin, buff);
	index = atoi(buff.c_str());
	if (index <= 0 || index > i)
		std::cout << "Error, wrong index. Ending search."<< std::endl;
	else
		book.print_contact(book.get_contact(index - 1));
}

int main(void)
{
	int			i;
	int			j;
    PhoneBook	book;
    std::string	buff;

	i = 0;
	j = 0;
	ft_banner();
    while (1)
    {
        std::cin >> buff;
        if (buff == "EXIT")
            return (0);
        else if (buff == "SEARCH")
        {
			if (i > 0)
				ft_search(i, book);
			else
				std::cout << "Your Phonebook is empty, please ADD some contact first" << std::endl;
        }
        else if (buff == "ADD")
        {
			if (i < 8)
			{
				book.set_contact(i, get_info());
				i++;
			}
			else if (i == 8)
			{
				book.set_contact(j, get_info());
				j++;
				if (j == 8)
					j = 0;
			}
        }
		else
            std::cout << "Please use ADD, SEARCH or EXIT only" << std::endl;
    }
}
