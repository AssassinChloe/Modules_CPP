#ifndef CONTACT_H
#define CONTACT_H

# include <iostream>
# include <string>

class Contact   
{
    public:

    Contact();
    ~Contact(void);

    std::string get_fname(Contact contact) const;
    std::string get_lname(Contact contact) const;
    std::string get_nname(Contact contact) const;
    std::string get_nb(Contact contact) const;
    std::string get_sec(Contact contact) const;

    void set_fname(std::string firstname);
    void set_lname(std::string lastname);
    void set_nname(std::string nickname);
    void set_nb(std::string number);
    void set_sec(std::string secret);
    
    private :

    std::string fname;
    std::string lname;
    std::string nname;
    std::string nb;
    std::string sec;
};

#endif