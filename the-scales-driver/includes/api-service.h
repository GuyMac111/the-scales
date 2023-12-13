//
//  api-service.h
//  HelloAgainC
//
//  Created by Guy McLean on 30/11/2023.
//

#ifndef api_service_h
#define api_service_h

using namespace std;

class ApiService {
public:
    ApiService();
    string GetRequest(string url);
};

#endif /* api_service_h */
