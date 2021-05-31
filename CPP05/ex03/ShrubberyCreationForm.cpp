#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) 
		: Form("Shrubbery Creation Form", 145, 137), target(target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &ref)
		: Form(ref), target(ref.target)
{
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm &ref)
{
	if (this == &ref)
		return (*this);
	Form::operator=(ref);
	return (*this);
}

void	ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	if (!getSigned())
		throw NotSignedException();
	if (executor.getGrade() >= getGradeToExec())
		throw GradeTooLowException();
	std::string filename = target + "_shrubbery";
	std::ofstream out(filename);
	if (!out.is_open())
		throw FileException();
	 out <<"                                              .       "<< std::endl;
    out <<"                                   .         ;        "<< std::endl;  
    out <<"      .              .              ;%     ;;         "<< std::endl;
    out <<"        ,           ,                :;%  %;          "<< std::endl;
    out <<"         :         ;                   :;%;'     .,   "<< std::endl;
    out <<",.        %;     %;            ;        %;'    ,;     "<< std::endl;
    out <<"  ;       ;%;  %%;        ,     %;    ;%;    ,%'      "<< std::endl;     
    out <<"   %;       %;%;      ,  ;       %;  ;%;   ,%;'       "<< std::endl;
    out <<"    ;%;      %;        ;%;        % ;%;  ,%;'         "<< std::endl;
    out <<"     `%;.     ;%;     %;'         `;%%;.%;'           "<< std::endl;
    out <<"      `:;%.    ;%%. %@;        %; ;@%;%'              "<< std::endl;    
    out <<"         `:%;.  :;bd%;          %;@%;'                "<< std::endl;            
    out <<"           `@%:.  :;%.         ;@@%;'                 "<< std::endl;    
    out <<"             `@%.  `;@%.      ;@@%;                   "<< std::endl;
    out <<"               `@%%. `@%%    ;@@%;                    "<< std::endl;
    out <<"                 ;@%. :@%%  %@@%;                     "<< std::endl;
    out <<"                   %@bd%%%bd%%:;                      "<< std::endl;    
    out <<"                     #@%%%%%:;;                       "<< std::endl;
    out <<"                     %@@%%%::;                        "<< std::endl;
    out <<"                     %@@@%(o);  . '                   "<< std::endl;    
    out <<"                     %@@@o%;:(.,'                     "<< std::endl;    
    out <<"                 `.. %@@@o%::;                        "<< std::endl;
    out <<"                    `)@@@o%::;                        "<< std::endl;
    out <<"                     %@@(o)::;                        "<< std::endl;
    out <<"                    .%@@@@%::;                        "<< std::endl;
    out <<"                    ;%@@@@%::;.                       "<< std::endl;
    out <<"                   ;%@@@@%%:;;;.                      "<< std::endl;
    out <<"               ...;%@@@@@%%:;;;;,..                   "<< std::endl;
    out.close();
}