/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cassassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 00:02:40 by cassassi          #+#    #+#             */
/*   Updated: 2022/03/28 00:02:42 by cassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

    std::string _fname;
    std::string _lname;
    std::string _nname;
    std::string _nb;
    std::string _sec;
};

#endif
