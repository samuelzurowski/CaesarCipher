//
//  CaesarEncrypt.cpp
//  CaesarCipher
//
//  Created by Samuel Zurowski on 6/8/18.
//  Copyright © 2018 Samuel Zurowski. All rights reserved.
//

#include "CaesarEncrypt.hpp"
#include <iostream>
#include <vector>

void encrypt() {
    std::string message;
    char ch;
    int shiftAmount;

    std::cout << "Enter Message to Encrypt: ";
    std::cin >> message;
    while(message.size() < 2) {
        std::cout << "Please enter a message longer than one character: ";
        std::cin >> message;
    }
    std::cout << "Enter Shift Amount: ";
    std:: cin >> shiftAmount;
    shiftAmount = shiftAmount % 26;
    std::cout << "Shift Amount: " << shiftAmount << std::endl;
    std::vector<char> messageVector(message.begin(), message.end());

    for (int i = 0; i < static_cast<int>(messageVector.size()); i++) {
        ch = messageVector.at(i);
        if(ch >= 'a' && ch <= 'z') {
            ch = ch + shiftAmount;
            if(ch > 'z') {
                ch = ch - 'z' + 'a' - 1;
            }
            messageVector.at(i) = ch;
        }
        else if(ch >= 'A' && ch <= 'Z') {
            ch = ch + shiftAmount;
            if(ch > 'Z') {
                ch = ch - 'Z' + 'A' - 1;
            }
            messageVector.at(i) = ch;
        }
    }
        message = "";
        for(int i=0; i < static_cast<int>(messageVector.size()); i++) {
            message += messageVector.at(i);
        }
        std::cout << "Encrypted Message: " + message << std::endl;
    }
