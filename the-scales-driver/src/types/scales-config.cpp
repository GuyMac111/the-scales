//
//  scales-config.cpp
//  the-scales-driver
//
//  Created by Guy McLean on 19/12/2023.
//

#include "scales-config.h"
#include "json/value.h"
#include "iostream"
using namespace std;
using namespace Json;

ScalesConfig::ScalesConfig() {};

ScalesConfig::ScalesConfig(Value& configJson){
    InitConfig(configJson);
};

void ScalesConfig::InitConfig(Value& configJson) {
    _backendUrl = configJson["backendUrl"].asString();
    cout << "_backendUrl" << _backendUrl;
}

string ScalesConfig::BackendUrl() {
    return _backendUrl;
}


