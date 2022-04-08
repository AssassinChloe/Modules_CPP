/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cassassi <cassassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 10:43:14 by cassassi          #+#    #+#             */
/*   Updated: 2022/04/08 10:43:14 by cassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PresidentialPardonForm_HPP
# define PresidentialPardonForm_HPP
# include "Bureaucrat.hpp"

class PresidentialPardonForm : public AForm
{
    public :
        PresidentialPardonForm(std::string target);
        ~PresidentialPardonForm();

        PresidentialPardonForm(PresidentialPardonForm const & src);
        PresidentialPardonForm& operator=(PresidentialPardonForm const & var);    
        virtual void execute(Bureaucrat const & executor) const;
    
    private :
        PresidentialPardonForm();
};
#endif
