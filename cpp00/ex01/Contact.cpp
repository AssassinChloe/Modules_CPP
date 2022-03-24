#include "Contact.hpp"

Contact::Contact() 
{
    return ;
}

Contact::~Contact(void)
{
    return ;
}

std::string Contact::get_fname(Contact contact) const
{
    return (contact.fname);
}

std::string Contact::get_lname(Contact contact) const
{
    return (contact.lname);
}

std::string Contact::get_nname(Contact contact) const
{
    return (contact.nname);
}

std::string Contact::get_nb(Contact contact) const
{
    return (contact.nb);
}

std::string Contact::get_sec(Contact contact) const
{
    return (contact.sec);
}

void Contact::set_fname(std::string firstname)
{
    this->fname = firstname;
}
void Contact::set_lname(std::string lastname)
{
    this->lname = lastname;
}
void Contact::set_nname(std::string nickname)
{
    this->nname = nickname;
}
void Contact::set_nb(std::string number)
{
    this->nb = number;
}
void Contact::set_sec(std::string secret)
{
    this->sec = secret;
}