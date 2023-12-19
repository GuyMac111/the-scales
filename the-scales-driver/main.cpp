#include <iostream>
#include <fstream>
#include "string-formatter.h"
#include "json/value.h"
#include "api-service.h"
#include "scales-config.h"


using namespace std;
using namespace Json;

static string YourMumsFunction(const char **argv) {
    string progName = argv[0];
    string weight = argv[1];
    return weight;
}

int main(int argc, const char * argv[]) {
    int yourMum = 4;
    yourMum++;
    string weight = YourMumsFunction(argv);
    StringFormatter* fmtr = new StringFormatter("Falcon Punch! " + weight +"\n");
    cout << fmtr->Format() << endl;
    delete fmtr;
    
    ifstream configStream("~/Projects/the-scales/the-scales-driver/config.json");
    stringstream buffer;
    buffer << configStream.rdbuf();
    Value configJson;
    
    cout << buffer.str();
//    buffer.str() >> configJson;
    
    ApiService api;
    string text = api.GetRequest("https://www.google.co.uk");
    cout << "wassup: " << "\n" << text << endl;
    return 0;
}
