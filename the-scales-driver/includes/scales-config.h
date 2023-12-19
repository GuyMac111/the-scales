//
//  scales-config.hpp
//  the-scales-driver
//
//  Created by Guy McLean on 19/12/2023.
//

#ifndef scales_config_hpp
#define scales_config_hpp

#include "json/value.h"
#include "iostream"
using namespace std;
using namespace Json;

class ScalesConfig {
public:
    ScalesConfig();
    ScalesConfig(Value& configJson);
    string BackendUrl();
    
private:
    void InitConfig(Value& configJson);
    bool _initialised;
    string _backendUrl;
};

#endif /* scales_config_hpp */
