//
//  address.cpp
//  address structure
//
//  Created by maya nachiappan on 10/25/24.
//

#include "address.hpp"
#include <iostream>

void Address::input() {
    std::cout << "Enter street: "; // takes user input for street
    std::getline(std::cin, street);

    std::cout << "Enter city: "; // takes user input for city
    std::getline(std::cin, city);

    std::cout << "Enter zip code: "; // stores zip code
    std::getline(std::cin, zipCode);
}

void Address::display() const // prints user address
{
    std::cout << "\nAddress Details:" << std::endl;
    std::cout << "Street: " << street << std::endl;
    std::cout << "City: " << city << std::endl;
    std::cout << "Zip Code: " << zipCode << std::endl;
}
