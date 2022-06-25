# include<iostream>

using namespace std;

void    go_fun(string REF){

    cout << REF << endl;
    REF = "hhhhh";
    return ;
}

int main(){
    string str(";jdks");
    string& REF(str);

    go_fun(REF);

cout << &REF << endl;
    return 0;
}
