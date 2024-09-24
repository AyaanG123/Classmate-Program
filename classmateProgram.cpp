//Ayaan Gill
//Classmate Program
//9-24-2024
#include <iostream>

int main() {
    std::string x;
    //declaring variable
    std::cout << "What is your name?"<< std::endl;
    std::cin >> x;
    //getting user input
    if (x.length() == 4){
        std::cout << "That's a nice name";
    }//comparing it using length function
    else if (x.length() == 5 || x.length() == 6){
        std::cout << "Nice to meet you " << x;
    }
    else{//printing based on the length
        std::cout << "Is that your actual name?";
    }
    return 0;
}
