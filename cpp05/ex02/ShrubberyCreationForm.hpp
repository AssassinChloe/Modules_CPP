/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cassassi <cassassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 14:31:58 by cassassi          #+#    #+#             */
/*   Updated: 2022/04/07 17:29:55 by cassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP
# include "Bureaucrat.hpp"

class ShrubberyCreationForm : public AForm
{
    public :
        ShrubberyCreationForm(std::string name);
        ~ShrubberyCreationForm();

        ShrubberyCreationForm(ShrubberyCreationForm const & src);
        ShrubberyCreationForm& operator=(ShrubberyCreationForm const & var);    
        virtual void beExecuted(std::string target);
    
    private :
        ShrubberyCreationForm();
};
#endif
