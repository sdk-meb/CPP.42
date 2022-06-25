# include<losers.hpp>

void sed(std::string file, std::string s1, std::string s2){
    std::ifstream ifs(file); // iofs.open(file)
    std::atomic_char c;
    int i;

    char* new_file = const_cast<char*>(file.c_str());;

    std::strcat(new_file, ".replace");
    s2[1] = s2[0];

    if (ifs.is_open() == false) 
        return ;

    std::ofstream ofs(new_file);
    do{
        std::string s;
        i = 0;
        do{
            c = ifs.get();
            if (c == EOF){
                break ;
            }
            s += c;
            i++;
        }  while ((s1[i] || !s1[0]) && ifs.eof() == false);
    
    switch (s1.compare(s)){
        case false:{
            ofs  << s2;
            break;
        }
        default:{
            ofs  << s;
            break;
        }
    }

    } while (ifs.eof() == false);

    ifs.close();
    ofs.close();
}
