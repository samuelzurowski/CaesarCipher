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
    shiftAmount = shiftAmount % 26; // to loop back modulo

    // cast int for loop
    for (int i = 0; i < static_cast<int>(messageVector.size()); i++) {
        ch = messageVector.at(i); // get value at i
        if(ch >= 'a' && ch <= 'z') { // checks if its between lowercase char
            ch = ch - shiftAmount; // shifts letter
            if(ch < 'a') {
                ch = ch + 'z' - 'a' + 1; // if less shift it based alpha
            }
            messageVector.at(i) = ch; // sets i equal new char
        }
        else if(ch >= 'A' && ch <= 'Z') { // used to check capitals
            ch = ch - shiftAmount; // shift char
            if(ch < 'A') { // if less does sifting
                ch = ch + 'Z' - 'A' + 1;
            }
            messageVector.at(i) = ch;
        }
    }
    message = "";
    for(int i=0; i < static_cast<int>(messageVector.size()); i++) {
        // concatenate message
        message += messageVector.at(i);
    }
    return message;
}
