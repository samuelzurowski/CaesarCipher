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

std::string encrypt(std::string message, int shiftAmount) {
    std::vector<char> messageVector(message.begin(), message.end());
    char ch;
    shiftAmount = shiftAmount % 26; // shift modulo

    // cast for loop
    for (int i = 0; i < static_cast<int>(messageVector.size()); i++) {
        ch = messageVector.at(i); // get value at i
        if(ch >= 'a' && ch <= 'z') { // check if its lower case in range
            ch = ch + shiftAmount; // shift
            if(ch > 'z') {
                ch = ch - 'z' + 'a' - 1; // shift if greater than z
            }
            messageVector.at(i) = ch;
        }
        else if(ch >= 'A' && ch <= 'Z') { // shift based on upper cases
            ch = ch + shiftAmount;
            if(ch > 'Z') {
                ch = ch - 'Z' + 'A' - 1;
            }
            messageVector.at(i) = ch;
        }
    }
    message = "";
    for(int i=0; i < static_cast<int>(messageVector.size()); i++) {
        // string concatenation.
        message += messageVector.at(i);
    }
    return message;
}
