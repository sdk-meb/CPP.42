# include"PhoneBook.hpp"

/************************** ADD CONTACT ***************************************/
void PhoneBook::add_contact(PhoneBook *myphone
    , std::string name, std::string num, int c){

    myphone->contact[c].add_name(&(myphone->contact[c]), name);
    myphone->contact[c].add_num(&(myphone->contact[c]), num);
    return ;
}

/************************* REST CONTACT ***************************************/
void PhoneBook::reset_contact(PhoneBook *myphone, int c){
    myphone->contact[c].add_name(&(myphone->contact[c]), "");
    myphone->contact[c].add_num(&(myphone->contact[c]), "");
}

/***************************** ADD NAME ***************************************/
void    Contact::add_name(Contact *con, std::string name){
        con->name = name;
        
}

/**************************** ADD NUMBER **************************************/
void    Contact::add_num(Contact *con, std::string num){
       con->number = num;
}

/************************** WRITE INFO OF CONTACT *****************************/
void PhoneBook::print_contact(PhoneBook myphone, int c){


    std::cout << "In contact { " << c + 1 << " } the name saved is [ " 
    << myphone.contact[c].get_info(myphone.contact[c], 1) << " ]"
    << '\n';
    std::cout << "and his number is ( "
    << myphone.contact[c].get_info(myphone.contact[c], 2)
    << " )"<< '\n';

    return ;
}

/********************** GET PRIVATE INFO OF CONTACT ***************************/
std::string Contact::get_info(Contact con, int info){

    return (info == 1 ? con.name : con.number);
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
            repo.reset_contact(&repo, person % 8);
        std::cout << "name :" ;
        std::cin >> name ;
        std::cout << "number :" ;
        std::cin >> number ;
        repo.add_contact(&repo, name, number,person++ % 8);
     }
    else if (!cstrcmp(command, "EXIT"))
        return ;
    else if (!cstrcmp(command, "SEARCH"))
    {
        std::cout << "what contact would like : " ;
        std::cin >> contact ;
        if (contact >= 8 || contact <= 0 || person < contact)
            std::cout << "contact "<< contact << " not Found \n$>";
        else
            repo.print_contact(repo, contact - 1);
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