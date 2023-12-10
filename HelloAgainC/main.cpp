#include <iostream>
#include "string-formatter.h"
#include "api-service.h"


using namespace std;

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
    ApiService api;
    string text = api.GetRequest("https://www.google.co.uk");
    cout << "wassup: " << "\n" << text << endl;
    return 0;
}
