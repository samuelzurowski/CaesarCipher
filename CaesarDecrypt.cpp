//
//  CaesarDecrypt.cpp
//  CaesarCipher
//
//  Created by Samuel Zurowski on 6/8/18.
//  Copyright © 2018 Samuel Zurowski. All rights reserved.
//

#include "CaesarDecrypt.hpp"
#include <iostream>
#include <vector>

void decrypt() {
    std::string message;
    char ch;
    int shiftAmount;
    
    std::cout << "Enter Message to Decrypt: ";
    std::cin >> message;
    
    std::cout << "Enter Shift Amount: ";
    std:: cin >> shiftAmount;
    shiftAmount = shiftAmount % 26;
    std::cout << "Shift Amount: " << shiftAmount << std::endl;
    std::vector<char> messageVector(message.begin(), message.end());
    for (int i = 0; i < static_cast<int>(messageVector.size()); i++) {
        ch = messageVector.at(i);
        if(ch >= 'a' && ch <= 'z') {
            ch = ch - shiftAmount;
            if(ch < 'a') {
                ch = ch + 'z' - 'a' + 1;
            }
            messageVector.at(i) = ch;
        }
        else if(ch >= 'A' && ch <= 'Z') {
            ch = ch - shiftAmount;
            if(ch < 'A') {
                ch = ch + 'Z' - 'A' + 1;
            }
            messageVector.at(i) = ch;
        }
    }
    message = "";
    for(int i=0; i < static_cast<int>(messageVector.size()); i++) {
        message += messageVector.at(i);
    }
    std::cout << "Decrypted Message: " + message << std::endl;;
}
