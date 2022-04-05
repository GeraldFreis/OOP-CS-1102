#include <iostream>
#include "library.h"
using namespace std;

int main(){
    int _booktypes = 4;
    std::string booknames[4] = {"harry potter", "samewise gamgee", "bob the builder", "The age of reason"};
    Library library(_booktypes, booknames);
    library.returnbook("harry potter");
    library.borrowbook("samewise gamgee");
    library.borrowbook("samewise gamgee");
    return 0;
}