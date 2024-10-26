//
//  address.hpp
//  address structure
//
//  Created by maya nachiappan on 10/25/24.
//

#ifndef address_hpp
#define address_hpp

#include <stdio.h>
#include <string>

struct Address // creates address structure with variables
{
    std::string street;
    std::string city;
    std::string zipCode;

    void input();
    void display() const;
};
#endif /* address_hpp */
