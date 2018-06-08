//
//  main.cpp
//  CaesarCipher
//
//  Created by Samuel Zurowski on 6/8/18.
//  Copyright © 2018 Samuel Zurowski. All rights reserved.
//

#include <iostream>
#include <limits>
#include "CaesarEncrypt.hpp"
#include "CaesarDecrypt.hpp"

int main(int argc, const char * argv[]) {
    int i = -1;
    std::cout << "Simple Caesar Cipher Program by Samuel Zurowski." << std::endl;
    std::cout << "Would you like to encrypt or decrypt your message?" << std::endl;
    while(true) {
        std::cout << "1 - Encrypt, 2 - Decrypt, 3 - Quit Program" << std::endl;
        std::cout << "Choose Option: ";
        if(!(std::cin >> i)) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Please enter a valid number!" << std::endl;
            continue;
        }
        switch (i) {
            case 1:
                encrypt();
                break;
            case 2:
                decrypt();
                break;
            case 3:
                std::cout << "Thank you for using Caesar Cipher by Samuel Zurowski" << std::endl;
                return 0;
            default:
                std::cout << "Please Enter a Valid Option!" << std::endl;
                break;
        }
    }
    return 0;
}
