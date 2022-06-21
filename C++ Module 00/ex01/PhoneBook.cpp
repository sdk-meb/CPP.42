# include"PhoneBook.hpp"

/************************** ADD CONTACT ***************************************/
void PhoneBook::add_contact(std::string name, std::string num, int c){

    this->contact[c].add_name(name);
    this->contact[c].add_num(num);
    return ;
}

/************************* REST CONTACT ***************************************/
void PhoneBook::reset_contact(int c){
    this->contact[c].add_name("");
    this->contact[c].add_num("");
}

/***************************** ADD NAME ***************************************/
void    Contact::add_name(std::string name){
        this->name = name;
        
}

/**************************** ADD NUMBER **************************************/
void    Contact::add_num( std::string num){
       this->number = num;
}

/************************** WRITE INFO OF CONTACT *****************************/
void PhoneBook::print_contact( int c){


    std::cout << "In contact { " << c + 1 << " } the name saved is [ " 
    << this->contact[c].get_info( 1) << " ]"
    << '\n';
    std::cout << "and his number is ( "
    << this->contact[c].get_info( 2)
    << " )"<< '\n';

    return ;
}

/********************** GET PRIVATE INFO OF CONTACT ***************************/
std::string Contact::get_info( int info){

    return (info == 1 ? this->name : this->number);
}

/*************************  COMPARET COMMAND **********************************/
int     cstrcmp(std::string cmdusr, std::string cmdman){
    int i = 0;

    while (cmdman[i] && cmdusr[i] && cmdman[i] == cmdusr[i])
        i++;
    if (cmdman[i] || cmdusr[i])
        return -1;
    return 0;
}

/************************* REPOSOTRY MANAGERE *********************************/
void    contact_repo(PhoneBook repo){
    std::string command;
    std::string name;
    std::string number;
    int person = 0, contact = 0;

S:  std::cout << "\n\033[1;34m How can'i help you !? \033[0m"
    << std::endl << "$>";
    std::cin >> command ;
    if (!cstrcmp(command, "ADD"))
    {
       if (person >= 8)
            repo.reset_contact(person % 8);
        std::cout << "name :" ;
        std::cin >> name ;
        std::cout << "number :" ;
        std::cin >> number ;
        repo.add_contact(name, number, person++ % 8);
     }
    else if (!cstrcmp(command, "EXIT"))
        return ;
    else if (!cstrcmp(command, "SEARCH"))
    {
        std::cout << "what contact would like : " ;
        std::cin >> contact ;
        if (contact > 8 || contact <= 0 || person < contact)
            std::cout << "contact "<< contact << " not Found \n$>";
        else
            repo.print_contact((contact % 9) - 1);
    }
    else
        std::cout << "\033[1;31m write {EXIT} if you haven't needed to me\n \033[0m";
    goto S;
}

/************************* BOOK CONSTRUCTOR ***********************************/
PhoneBook::PhoneBook(bool init){
    if (init == 0)
        std::cout << "\033[1;44m Welcome to your contact repository \033[0m" ;
}

/*************************** main function ************************************/
int main()
{
   PhoneBook repo(0);

    contact_repo(repo);
    
    return 0;
}