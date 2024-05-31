#pragma once

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

#define	HIGHEST 1
#define	LOWEST 150

class Bureaucrat;

class AForm
{
	private:

	const std::string	_name;
	bool				_signed;
	const int			_reqGradeToSign;
	const int			_reqGradeToExecute;

	public:

	AForm();
	virtual ~AForm() = 0;
	// Form &operator=(const Form &other);
	// Form(const Form &other);

	class GradeTooHighException : public std::exception {
		public:
			const char *what() const throw();		
	};
	class GradeTooLowException : public std::exception {
		public:
			const char *what() const throw();
	};

	std::string	getName() const;
	bool		getSigned() const;
	int			getReqGradeToSign() const;
	int			getReqGradeToExecute() const;

	void	beSigned(const Bureaucrat &b);
	
	virtual void	execute(Bureaucrat const &executor) const = 0;
};

std::ostream &operator<<(std::ostream &out, AForm &f);