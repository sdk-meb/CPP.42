# include<losers.hpp>

void sed(std::string file, std::string s1, std::string s2){

	std::ifstream	ifs;
	std::string		new_file (file + ".replace");

	ifs.open(file.c_str());
	char	c;
	int		i=0;

	if (ifs.is_open() == false){ 
		std::cerr << "can't open " << file << std::endl;
		return ;
	}

	std::ofstream ofs;
	ofs.open(new_file.c_str());
	if (!ofs){
		std::cerr << "can't creaet " << new_file << std::endl;
		return ;
	}

	std::string s;
	do{
		if (i) i-=1;
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
				i = 0;
				s.erase();
				break;
			}
			default:{
				ofs  << s.at(0);
			}
		}
		s.erase(0, 1);
	} while (ifs.eof() == false);
	ofs  << s;

	ifs.close();
	ofs.close();
}
