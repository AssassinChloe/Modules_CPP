/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cassassi <cassassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 10:43:14 by cassassi          #+#    #+#             */
/*   Updated: 2022/04/08 10:43:14 by cassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RobotomyRequestForm_HPP
# define RobotomyRequestForm_HPP
# include "Bureaucrat.hpp"
# include <time.h>

class RobotomyRequestForm : public AForm
{
    public :
        RobotomyRequestForm(std::string target);
        ~RobotomyRequestForm();

        RobotomyRequestForm(RobotomyRequestForm const & src);
        RobotomyRequestForm& operator=(RobotomyRequestForm const & var);    
        virtual void execute(Bureaucrat const & executor) const;
    
    private :
        RobotomyRequestForm();
};
#endif
