//
//  api-service.cpp
//  HelloAgainC
//
//  Created by Guy McLean on 30/11/2023.
//

#include <iostream>
#include "api-service.h"
#include <cpr/cpr.h>

using namespace cpr;

ApiService::ApiService() {}

string ApiService::GetRequest(string url) {
    cout << url << endl;
    Response r = Get(Url(url));
    return r.text;
}
