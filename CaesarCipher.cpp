//
//  CaesarCipher.cpp
//  CaesarCipher
//
//  Created by Samuel Zurowski on 6/8/18.
//  An example of how to use my CaesarCipher Functions
//  Anyone can use it for non-profit purposes
//  Copyright © 2018 Samuel Zurowski. All rights reserved.
//

#include <iostream>
#include <limits>
#include "CaesarEncrypt.hpp"
#include "CaesarDecrypt.hpp"

int main(int argc, const char * argv[]) {
    // An Example
    std::string message = "test"; // feel free to play around with the message.
    int shiftAmount = 5; // feel free to play around with this number
    
    std::cout << "Original Message: " << message << std::endl;
    std::string encryptMessage = encrypt(message, shiftAmount);
    std::cout << "Encrypted Message: " << encryptMessage << std::endl; // encrypted
    std::string decryptMessage = decrypt(encryptMessage, shiftAmount);
    std::cout << "Decrypted Message: " << decryptMessage << std::endl; // decrypted
    return 0;
}
