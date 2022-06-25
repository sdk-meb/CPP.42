# include<losers.hpp>

void sed(std::string file, std::string s1, std::string s2){
    std::ifstream ifs(file); // iofs.open(file)
    std::atomic_char c;
    int i;

    char* new_file = const_cast<char*>(file.c_str());;

    std::strcat(new_file, ".replace");
    s1[0] = s2[0];

    if (ifs.is_open() == false) 
        return ;

    std::ofstream ofs(new_file);
    do{
        i = 0;

        c = ifs.get();
        if (c == EOF)
            break ;
        switch (1)
        {
            case (1):{
            do{
                c = ifs.get();
                  //  if (c == EOF)

                }  while (ifs.eof() == false);
            }
        default:
            break;
        }
        ofs  << c;

    } while (ifs.eof() == false);

    ifs.close();
    ofs.close();
}
