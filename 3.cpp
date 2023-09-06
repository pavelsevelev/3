#include <iostream>
#include <string>


int main()
{
    std::string s = "stestsdsad!";

    std::cout << s << "\n";
    std::cout << s.length() << "\n";
    std::cout << s[0] << "\n";
    std::cout << s[s.length() - 1]; /*не совсем понял как работает!если length() выдает сколько 
                                      символов в строке то почему выходит так что когда мы отнимае
                                      еденицу он выдает последний символ а не чило символов в строке
                                      меньше на 1?
                                      */
}