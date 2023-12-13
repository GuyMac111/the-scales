//
//  string-formatter.cpp
//  HelloAgainC
//
//  Created by Guy McLean on 23/11/2023.
//
#include "iostream"
#include "string-formatter.h"

StringFormatter::StringFormatter(string init_string): init_string_(init_string)
{
    
}

string StringFormatter::Format() {
    return init_string_;
}
