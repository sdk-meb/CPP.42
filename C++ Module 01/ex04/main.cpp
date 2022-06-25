# include<losers.hpp>

// int main(int argc, char** argv){

//     if (argc == 4)
//         sed(argv[1], argv[2], argv[3]);
//     return 0;
// }

#include <string>
#include <iostream>

int main ( )
{

  std::string str1 ("AA");

  if (str1.compare(0,1,"AA",0,1) == 0)
    std::cout << "still, " << str1 << " is an apple\n";

  return 0;
}