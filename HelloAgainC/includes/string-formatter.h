//
//  string-formatter.h
//  HelloAgainC
//
//  Created by Guy McLean on 23/11/2023.
//

#ifndef string_formatter_h
#define string_formatter_h

using namespace std;

class StringFormatter {
public:
    StringFormatter(string init_string);
    string Format();
private:
    string init_string_;
};

#endif /* string_formatter_h */
