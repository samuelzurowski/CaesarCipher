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

std::string decrypt(std::string message, int shiftAmount) {
    std::vector<char> messageVector(message.begin(), message.end());
    char ch;
    shiftAmount = shiftAmount % 26;

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
    return message;
}
