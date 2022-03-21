#ifndef CONTACT_H
#define CONTACT_H

class Contact   
{
    public:

    Contact(std::string pfname, std::string plname, std::string pnname, std::string pnb, std::string psec);
    ~Contact(void);

    std::string fname;
    std::string lname;
    std::string nname;
    std::string nb;
    std::string sec;
};

#endif