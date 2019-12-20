// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Jaeyoon (Jay) Lee
// Created on: Dec 2019
// This program finds the hexadecimal of letter

#include <iostream>
#include <map>
#include <list>
#include <string>
#include <sstream>


main() {
    // this function finds the hexadecimal of letter

    std::string someString = "";
    std::map<char, std::string> unicode;
    std::list<char> characters;
    std::map<char, int> someInfo = {
        {'a', 1},
        {'b', 2},
        {'c', 3},
    };

    unicode['J'] = "4a";
    unicode['L'] = "4c";
    unicode['a'] = "61";
    unicode['e'] = "65";
    unicode['y'] = "79";

    std::cout << "Enter the string: ";
    std::cin >> someString;
    std::cout << " " << std::endl;

    for (char counter : someString) {
        characters.push_back(counter);
    }

    for (char counter : characters) {
        if (unicode.count(counter) > 0) {
            std::cout << unicode[counter] << " ";
        } else {
            std::cout << "That characters are not in dictionary.";
            break;
        }
    }
    std::cout << " " << std::endl;
}
