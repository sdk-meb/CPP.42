# include<losers.hpp>

int main(int argc, char** argv){

    if (argc == 4)
        sed(argv[1], argv[2], argv[3]);
    else
        std::cerr << "<filename> " << "and <s1> to replace by <s2> " << std::endl;
    return 0;
}
