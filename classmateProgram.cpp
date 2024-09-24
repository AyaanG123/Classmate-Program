#include <iostream>

int main() {
    std::string x;
    
    std::cout << "What is your name?"<< std::endl;
    std::cin >> x;
    
    if (x.length() == 4){
        std::cout << "That's a nice name";
    }
    else if (x.length() == 5 || x.length() == 6){
        std::cout << "Nice to meet you " << x;
    }
    else{
        std::cout << "Is that your actual name?";
    }
    return 0;
}