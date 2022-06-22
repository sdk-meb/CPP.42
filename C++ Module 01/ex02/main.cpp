#include<iostream>
#include<iomanip>

int main(){
    std::string msg("HI THIS IS BRAIN");
    std::string* stringPTR(&msg);
    std::string& stringRFF(msg);

{
    std::cout << "• The memory address of the string variable: "
    << &msg << std::endl;

    std::cout << "• The memory address held by stringPTR:      "
    << &stringPTR << std::endl;

    std::cout << "• The memory address held by stringREF:      "
    << &stringRFF << std::endl;
}

{
    std::cout << "• The value of the string variable:      "
    << msg << std::endl;
    
    std::cout << "• The value pointed to by stringPTR:         "
    << stringPTR << std::endl;

    std::cout << "• The value pointed to by stringREF:     "
    << stringRFF << std::endl;
}

    return 0;
}