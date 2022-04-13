#include <iostream>
#include "htmlretriever.h"


// constructors and destructors initialisation
HtmlRetriever::HtmlRetriever(){
    website_url = "";
    htmlstring[1] = "";
    htmllength = maxnum;
    #undef maxnum;
}

HtmlRetriever::HtmlRetriever(const int linesofhtml){
    htmllength = linesofhtml;
    #undef maxnum;
}

HtmlRetriever::HtmlRetriever(const string _website_url){
    website_url = _website_url;
}

HtmlRetriever::~HtmlRetriever(){
    delete [] htmlstring;
}

// member functions